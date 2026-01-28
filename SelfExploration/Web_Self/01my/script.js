let number = prompt("Enter a number to check if its divisible by 5 or not.")

if (number % 5 === 0) {
    console.log("The entered numebr: ", number, " is divisible by 5" );
    alert("The Entered number is divisible by 5.");
}else{
    console.log("The entered numebr: ", number, " is not divisible by 5" );
    alert("The Entered number is not divisible by 5.");
}