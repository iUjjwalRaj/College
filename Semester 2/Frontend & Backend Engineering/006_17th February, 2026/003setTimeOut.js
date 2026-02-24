// setTimeout(a, timeout); "a" is a function and "timeout" is the time in milliseconds after which the function will be executed.
//this makes setTimeout a higher order function... as it is taking another function as an argument.



/* setTimeout(() => {
    
 }, timeout); */
console.log(`starting...`);
setTimeout(() => {
    console.log("Hi");
    console.log("Bye");
    
}, 3000); // this will print "Hello World" after 3 seconds (3000 milliseconds)

setTimeout(() => {
    console.log("Aether");
    console.log("Lumine");
    
}, 2000); // this will take to event queue and execute this function before "Hi" and "Bye" because it has less timeout than the previous setTimeout function.
setTimeout(() => {
    console.log("Columbina");
    console.log("Hyposelenia");
    
}, 2000);
setTimeout(() => {
    console.log("Kamisato");
    console.log("Ayaka");
    
}, 0);
console.log(`ending...`);