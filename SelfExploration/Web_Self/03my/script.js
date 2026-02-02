//CALCULATE SUM OF NUMBER 1 TO 5

let sum = 0;
let n = 11;
for (let i = 0; i < n; i++) {
    sum = sum + i;
}

console.log("sum of first 5 nautural numbers is", sum);


// Print 1 to 5

for(let i = 1; i <= 5; i++){
    console.log("i =", i);
}

//using while loop
let j = 1;
while(j <= 5){
    console.log("while loop variable, j is equal to: ", j);
    j++;
}

// do while - at least run loop one time before checking condition
let k = 0;
do{
    console.log("k = ", k);
    k++;

}while(k < 11);


// FOR "OF" & "in" loop
// 1. For "of" loop

let str = "Apple";
let size = 0;

for(let i of str){ //iterator --> charahters
    console.log("i=", i);
    size++;
}

console.log("string size =", size);


// 2. for-in loop

let student = {
    name: "Rahul Kumar",
    age: 20,                                //OBJECT
    cgpa: 7.5,
    isPass: true,
};

for(let i in student) {
    console.log("Key = ",i, " value = ", student[i]);
}


// Practise Question 1;
// print all even number 0 to 100

for(let i = 0; i <= 100; i++){
    if(i % 2 == 0){
        console.log("i = ", i);
    }
}

// Practise Question 2;
//Create a game where you start with any random game numer. Ask the user to keep guessing the game number until user enter correct value.

let gameNum = 25;

// let userNum = prompt("Guess the game number: ");

// while (userNum != gameNum) {
//     userNum = prompt("You guessed wrong... Guess the game number again: ");
// }

console.log("Congratulation you guessed the number correctly");


//string

let str3 = "Apple";
// to find lenthf we will use "str3.length"
// to find index of tring we wrute it by str3[0]
console.log(str3.length);
console.log(str3[0], str3[3]);


// special string or {`Templet Lateral`}

let obj = {
    item: "Pen",
    price: 10,
};

let output = `The cost of ${obj.item} is ${obj.price} rupees.`;
console.log(output);

console.log("The cost of", obj.item, " is ", obj.price, "rupees.");

//Templet Literals
let specialString = `This is a Templet Lateral. ${1+2+3}`;
console.log(specialString);
console.log(typeof specialString);


//Practice Question Prompt user to enter their full name. Generate a username for them based on the input. start username with @, followed
//by their full name and end with the fullname length.

let userName = prompt("Enter Your fullname: ");

userName = userName.toLowerCase();
let lengthUserName = userName.length;

let userID = "@" + userName + lengthUserName;
console.log("Your UserID is: ", userID);