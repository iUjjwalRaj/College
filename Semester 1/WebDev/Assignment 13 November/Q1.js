
// 1 Array Sum Function


function sumArray(arr) {
  let sum = 0;
  for (let i = 0; i < arr.length; i++) {

    sum += arr[i];
  }
  return sum;
}


console.log("Sum of Array:", sumArray([1, 2, 3, 4]));  



// 2️ Find Even Numbers

function getEvenNumbers(arr) {
  let evens = [];
  for (let i = 0; i < arr.length; i++) {
    
    if (arr[i] % 2 === 0) {
      evens.push(arr[i]);
    }
  }
  return evens;
}


console.log("Even Numbers:", getEvenNumbers([1, 2, 3, 4, 5, 6]));  



// 3 Reverse Array (without using reverse())


function reverseArray(arr) {
  let reversed = [];
  for (let i = arr.length - 1; i >= 0; i--) {

    reversed.push(arr[i]);
  }
  return reversed;
}


console.log("Reversed Array:", reverseArray([10, 20, 30, 40]));  



// 4 Student Details

let student = {
  name: "John",
  age: 20,
  marks: 85
};

function printDetails(student) {
  console.log("Name:", student.name);
  console.log("Age:", student.age);
  console.log("Marks:", student.marks);
}

console.log("\nStudent Details:");
printDetails(student);



// 5️ Array of Objects

let students = [
  { name: "Aman", marks: 85 },
  { name: "Riya", marks: 92 },
  { name: "Kunal", marks: 76 }
];

function getTopper(students) {
  let topper = students[0];
  for (let i = 1; i < students.length; i++) {
    if (students[i].marks > topper.marks) {
      topper = students[i];
    }
  }
  return topper;
}


let topStudent = getTopper(students);
console.log("\nTopper:", topStudent.name, "with marks", topStudent.marks);
