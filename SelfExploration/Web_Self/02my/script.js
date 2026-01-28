let score = prompt("Enter your marks to get a grade.");

if (score > 100) {
    console.log("Invalid Score");
    alert("Invalid Score! Please referesh the page and enter correctly.");
} else if (score >= 80 && score <= 100){
    console.log(score, "Gives you an A grade.");
    alert("You got an A grade.");
} else if (score >= 70 && score <= 89) {
    console.log(score, "Gives you a B grade");
    alert("You got a B grade.")
} else if (score >= 60 && score <= 69) {
    console.log(score, "Gives you a C grade");
    alert("You got a C grade.")
} else if (score >= 50 && score <= 59) {
    console.log(score, "Gives you a D grade");
    alert("You got a D grade.")
} else if (score >= 0 && score <= 49) {
    console.log(score, "Gives you an F grade");
    alert("You got an F grade. Better luck next time!");
} else {
    console.log("Invalid Score");
    alert("Invalid Score! Please referesh the page and enter correctly.");
}