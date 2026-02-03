let Maya={
    "name":"Maya",
    "age":20,
    "district":"Mathura",
    "display":function() {
        console.log("hi");
        console.log("bye");
        console.log(this);
        console.log(this.name);
        
    }
}

console.log(Maya);
Maya.display();

// Change background color randomly
function changeColor() {
    const colors = ["lightblue", "lightgreen", "#0b3da1", "lightyellow", "lightpink", "lavender", "lightgray", "peachpuff", "mintcream", "honeydew"];
    const randomColor = colors[Math.floor(Math.random() * colors.length)];
    document.body.style.backgroundColor = randomColor;
}

// Show button text when clicked
function show(btn) {
    alert("You clicked: " + btn.innerText);
}
