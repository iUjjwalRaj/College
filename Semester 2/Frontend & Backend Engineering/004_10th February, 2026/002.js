// OBJECT:-


let obj = {
    fname: "Ujjwal",
    age: 19,
    city: "Delhi",
    subloc: "Defence Colony",
}

// let age = obj.age;
// let city = obj.city;

// console.log(age);
// console.log(city);

// DESTRUCTURING:-

let { age, city, subloc: locality, college = "IIT Jodhpur"} = obj;

console.log(age);
console.log(city);
//console.log(subloc);    // This will give an error as subloc is not defined. We have renamed it to locality in the destructuring assignment.
console.log(locality);
console.log(college);
