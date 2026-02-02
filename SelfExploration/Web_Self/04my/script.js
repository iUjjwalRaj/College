// ARRAY

// Practice Qs. 1
//for given array with marks of students -> [85, 97, 44, 37, 76, 60]
//find the average marks of entire class 

let marks = [85, 97, 44, 37, 76, 60];
let sum = 0;

for (let index = 0; index < marks.length; index++) {
    sum = sum + marks[index];
}

let average = sum / marks.length ;

console.log("Average Marks = ", average);


// Practice Qs. 2
//for given array with price of 5 items -> [250, 645, 300, 900, 50]
//All item have an offer of 10% off on them. change the array to store final price after applying offer.

let price = [250, 645, 300, 900, 50];

for (let index = 0; index < price.length; index++) {
    price[index] = price[index] - (price[index]/10);
}

console.log(`Final price = ${price}`);


// Practice Qs. 3
//create an array to store companies -> ["Bloomberg", "Microsoft", "Uber", "Google", "IBM", "Netflix"]
//A. Remove the first company from the array
//B. Remove Uber & add Ola in its place
//C. Add Amazon at the end

let companies = ["Bloomberg", "Microsoft", "Uber", "Google", "IBM", "Netflix"];
console.log(companies);
companies.splice(0, 1);
console.log(companies);
companies.splice(1, 1, "Ola");
console.log(companies);
companies.push("Amazon");
console.log(companies);
