//setInterval is a function that is used to execute a function repeatedly after a certain interval of time. 
// It takes two arguments, the first one is the function that we want to execute and the second one is the interval of time in milliseconds.
// setInterval(a, interval); "a" is a function and "interval" is the time in milliseconds after which the function will be executed repeatedly.
// this makes setInterval a higher order function... as it is taking another function as an argument.

let id1 =setInterval(() => {
    console.log("Nilou");
    
}, 2000);

clearInterval(id1); // this will stop the setInterval function from executing further. 
                // It takes the id of the setInterval function as an argument which is returned by the setInterval function when it is called.

let id2 = setInterval(() => {
    console.log("Furina");
    
}, 2000);

console.log(id1);
console.log(id2);


