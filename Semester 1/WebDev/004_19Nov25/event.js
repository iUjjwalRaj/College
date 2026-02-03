var aura = 0;

let head = document.getSelecttorAll("h1");

function increase() {
    //reaction code

    console.log("Button clicked");
    console.log("Current aura count: " + aura);
    aura ++
    console.log("New aura count: " + aura);
    document.getElementById("auraCount").innerText = aura;
    head[0].innerHTML=`Cart Count= ${aura}`;
    head[0].style.color="blue";
}

function decrease() {
    //reaction code

    console.log("Button clicked");
    console.log("Current aura count: " + aura);
    aura -= 1;
    document.getElementById("auraCount").innerText = aura;
}

