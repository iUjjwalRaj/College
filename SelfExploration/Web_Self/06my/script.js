let div = document.querySelector("div");
console.log(div);
console.dir(div);

let heading = document.querySelector("h1");

let heading2 = document.querySelector("h2");

console.dir(heading2.innerText);

heading2.innerText = heading2.innerText + " from Apna College Student."


let divs = document.querySelectorAll(".box")
let idx =1
for (div of divs) {
    div.innerText = `New Unique Value ${idx}`;
    idx++;
}


let newBtn = document.createElement("button");
newBtn.innerText = "Click Me!";
console.log(newBtn);

div.append(newBtn);

let newHewading = document.createElement("h1");
newHewading.innerHTML = "<i>Hi I am New here</i>";

document.querySelector("header").prepend(newHewading);


//Practise Q1

let newButton = document.createElement("button");
newButton.innerText = "Click Me";
newButton.style.backgroundColor = "red";
newButton.style.color = "white";

document.querySelector("body").append(newButton);



//Practice q2

