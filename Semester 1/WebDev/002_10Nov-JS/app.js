console.log("Hello from JavaScript!");


let first=20;
let second=30;
let sum=first+second;
console.log("The sum is: "+sum);

let age=17;
if(age>=18){
    console.log("You are eligible to vote.");
}else{
    console.log("You are not eligible to vote.");
}

//Check Prime Number
let num = 97;
let isPrime = true;

if (num <= 1) {
  isPrime = false;
} else {
  for (let i = 2; i * i <= num; i++) {
    if (num % i === 0) {
      isPrime = false;
      break;
    }
  }
}

console.log(`${num} is${isPrime ? "" : " not"} a prime number.`);


// swap two numbers
let a = 5;
let b = 10;

console.log(`Before Swap: a = ${a}, b = ${b}`);

// Using a temporary variable
let temp = a;
a = b;
b = temp;

console.log(`After Swap: a = ${a}, b = ${b}`);

// Reverse a number
let number = 12345;
let reversed = 0;

while (number > 0) {
  let digit = number % 10;
  reversed = reversed * 10 + digit;
  number = Math.floor(number / 10);
}

console.log(`Reversed Number: ${reversed}`); 



