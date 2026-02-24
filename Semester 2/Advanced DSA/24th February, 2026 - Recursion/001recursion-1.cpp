/* 1. Recursion Basics - Understanding the concept of recursion in programming.
i) A function that calls itself is called a recursive function.
ii) example: a.)
func(){
    func();             // stack overflow error 
}
b.)
func(){
    return;             // base case
    func();             // stack overflow error
}
*/