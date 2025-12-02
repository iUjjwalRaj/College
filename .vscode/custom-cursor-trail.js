/* custom-cursor-trail.js
   - Measures typing velocity -> sets --cursor-scale
   - Creates short-lived trail nodes at cursor screen position
   - Works together with the CSS above
*/

(function () {
  // small helpers
  function qs(sel){ return document.querySelector(sel); }
  function qsa(sel){ return document.querySelectorAll(sel); }

  // create trail container if missing
  let trailRoot = document.getElementById('vscode-cursor-trail');
  if(!trailRoot){
    trailRoot = document.createElement('div');
    trailRoot.id = 'vscode-cursor-trail';
    document.body.appendChild(trailRoot);
  }

  // typing speed measurement (chars / sec averaged)
  let lastTime = performance.now();
  let lastLen = 0;
  let velocity = 0;
  let velTimer = null;

  // observe typing via keydown events inside editor
  window.addEventListener('keydown', (ev) => {
    const now = performance.now();
    const dt = Math.max(1, now - lastTime);
    lastTime = now;

    // simple velocity bump
    const instant = 1000 / dt; // higher when keypresses are close
    // low-pass filter
    velocity = velocity * 0.75 + instant * 0.25;

    // set CSS var on the root editor element (scale range 1.0 -> 1.6)
    const root = document.querySelector('.monaco-editor');
    if(root){
      const scale = Math.min(1.6, 1.0 + (velocity / 12)); // tweak divisor to change sensitivity
      root.style.setProperty('--cursor-scale', scale.toFixed(3));
      // small vertical lift for visual feedback
      root.style.setProperty('--cursor-y-offset', '-1px');
      // release lift after a short timeout
      if(velTimer) clearTimeout(velTimer);
      velTimer = setTimeout(() => {
        root.style.setProperty('--cursor-scale', '1.0');
        root.style.setProperty('--cursor-y-offset', '0px');
      }, 350);
    }

    // also create a trail dot at current cursor position
    createTrailDot();
  }, {capture: true, passive: true});

  // create trail dot function (uses editor cursor DOM)
  function createTrailDot(){
    // find cursor DOM node (monaco uses .cursor)
    const cursor = document.querySelector('.monaco-editor .cursor');
    if(!cursor) return;

    const rect = cursor.getBoundingClientRect();
    // create dot
    const dot = document.createElement('div');
    dot.className = 'vscode-cursor-trail-dot fade';
    // use life ~700ms, reduce if user types a lot
    dot.style.setProperty('--life', '700ms');

    // position center of cursor
    dot.style.left = (rect.left + rect.width / 2) + 'px';
    dot.style.top = (rect.top + rect.height / 2) + 'px';

    trailRoot.appendChild(dot);

    // cleanup after animation
    setTimeout(() => {
      if(dot.parentNode) dot.parentNode.removeChild(dot);
    }, 900);
  }

  // also create tiny trail on mouse clicks or selection changes
  window.addEventListener('mousedown', createTrailDot, {passive:true});
  // when editor content loses focus, reset scale
  window.addEventListener('blur', () => {
    const root = document.querySelector('.monaco-editor');
    if(root){
      root.style.setProperty('--cursor-scale', '1.0');
      root.style.setProperty('--cursor-y-offset', '0px');
    }
  });

  // small safety: reattach trailRoot if VSCode redraws body
  const bodyObserver = new MutationObserver(() => {
    if(!document.getElementById('vscode-cursor-trail')){
      trailRoot = document.createElement('div');
      trailRoot.id = 'vscode-cursor-trail';
      document.body.appendChild(trailRoot);
    }
  });
  bodyObserver.observe(document.body, {childList:true, subtree:false});
})();
