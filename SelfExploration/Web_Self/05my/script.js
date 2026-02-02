// FUNCTION

// Practice Qs. 1
// a. CREATE a function using "function" key word that takes a string as an argument & return the number of vowels in the string
// b. CREATE an arrow function to perform the same takes

//a.
let str = "Hello";

function countVowel(str){
    let count = 0;
    for (let index = 0; index < str.length; index++) {
        if (str[index] === "a" || str[index] === "e" || str[index] === "i" || str[index] === "o" || str[index] === "u" || str[index] ==="A" || str[index] ==="E" || str[index] ==="I" || str[index] === "O" || str[index] === "U" ) {
            count ++;
        }
    
    }
    return count;
}


let count = countVowel(str);
console.log(`Number of Vowel in string ${str} is: ${count}.`);


const countVow = (str) => {
    let count = 0;
    for (let index = 0; index < str.length; index++) {
        if (str[index] === "a" || str[index] === "e" || str[index] === "i" || str[index] === "o" || str[index] === "u" || str[index] ==="A" || str[index] ==="E" || str[index] ==="I" || str[index] === "O" || str[index] === "U" ) {
            count ++;
        }
    
    }
    return count;
}


// Practice Qs. 2
// a. For a given array of numbers, print the square of each value using the forEach loop.

let array = [1, 2, 3, 4, 5, 6];

array.forEach((square)=>{
    console.log(square * square);
})

// Practice Qs. 3
// We are given array of marks of students. Filter out of the marks of students that scored 90+.

let marks = [45, 67, 89, 90, 91, 78, 88, 95, 100, 54];

console.log(`Marks scored by Students =`, marks);

let highMarks = marks.filter((num)=>{
    return num > 90;
})

console.log(`High Marks Obtained by Students =`, highMarks);


// Practice Qs. 3
// Take a number n as input from user. Create an array of numbers from 1 to n.
// a. Use the reduce method to calculate sum of all numbers in the array.
// b. Use the reduce method to calculate product of all numbers in the array.


let n = prompt(`Enter a number`);
let cor = 1;
let arr = [];

for (let index = 0; index < n; index++) {
    arr[index] = cor;
    cor++;
}

let sumArr = arr.reduce((res, curr)=>{
    return res + curr;
})

console.log(`sum of array till n = ${n} is equal to: ${sumArr}`);

let productArr = arr.reduce((res, curr)=>{
    return res * curr;
})

console.log(`Product of array till n = ${n} is equal to: ${productArr}`);
