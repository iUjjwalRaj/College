let array = [23, 34, 56, 22];
console.log(array);

console.log("Push funtion");

array.push(100)    // adding elemet at the end of the array
console.log(array);


console.log("Pop function");
array = [23, 34, 56, 22];
array.pop();        // Dleteing the ele=ment from behind
console.log(array);

console.log("Shift funtion");
array = [23, 34, 56, 22];
array.shift();
console.log(array);


console.log("Unshift funtion");
array = [23, 34, 56, 22];
array.unshift("Columbina");
console.log(array);
console.log(`Length of Array: ${array.length}`);

// SPLICE
console.log("Splice funtion");
array = [23, 34, 56, 22, 100, 200, 129];
console.log(array);
array.splice(1, 2, 199, 299, 399, 100, 200);
console.log(array);

//concept of deleted elementrs
array = [23, 34, 56, 22, 100, 200, 129];
let deleteElement = array.splice(1, 2, 199, 299, 399, 100, 200);
console.log(array);
console.log(deleteElement);











