let array = [23, 45, 34, "Columbina", true, ()=> {}, 34, 22];

console.log("Method 1");

console.log(array);   // Method 1 of printing array


// Method 2 printing usinf for loop
console.log("Method 2");

for (let index = 0; index < array.length; index++) {
    console.log(array[index]);

}


// Method 3 FOR-OF loop
console.log("Method 3");

for (let element of array) {
    console.log(element);

}


// Method 4 FOR-IN loop
console.log("Method 4");

for (let x in array) {
    console.log(x, array[x]);
    
    
}


console.log(`Type of Array: ${typeof(array)}`);
