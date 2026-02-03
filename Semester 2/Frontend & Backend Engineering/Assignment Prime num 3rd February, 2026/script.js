// Checking if the entered number is prime

let a = prompt("Enter a Number:");

///////////////////////////////////////////////////////////////////////////////////

function isPrime(a) {
    if (a == 2) {
        return true;
    }else if (a == 1) {
        return false;
    }
    for (let i = 2; i < a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

////////////////////////////////////////////////////////////////////////////////////

let result = isPrime(a);

if (result) {
    console.log(`${a} is a prime number.`);
}else {
    console.log(`${a} is not a prime number.`);
}

////////////////////////////////////////////////////////////////////////////////////////