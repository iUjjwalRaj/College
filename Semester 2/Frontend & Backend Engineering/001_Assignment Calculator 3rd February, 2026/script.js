//Calculator Assignment

let num1 = prompt("Enter the first number: ");
let num2 = prompt("Enter the second number: ");
let operation = prompt("Enter the operation (+, -, *, /): ");

function calculation(num1, num2, operation){
    let result;
    if (operation == "+") {
        result = num1 + num2;
        return result;
    }else if (operation == "-") {
        result = num1 - num2;
        return result;
    }else if (operation == "*") {
        result = num1 * num2;
        return result;
    }else {
        result = num1 / num2;
        return result;
    }
}

let a = calculation(num1, num2, operation);
console.log(a);