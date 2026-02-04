/*Problem
You are given a positive integer n.
Return true if it is a Happy Number, otherwise return false.
📘 What is a Happy Number?
A number is called Happy if the following process ends in 1:
Replace the number by the sum of the squares of its digits
Repeat the process
If the number becomes 1 → Happy
If the process enters a loop that never reaches 1 → Not Happy
🔍 Examples
19 → true
1² + 9² = 82  
8² + 2² = 68  
6² + 8² = 100  
1² + 0² + 0² = 1
2 → false
(falls into a loop and never reaches 1)*/


/*Sollution:- 
Part 1:-
A happy number is a number where we repeatedly replace the number
by the sum of the squares of its digits.
We repeat this process.
If the number becomes 1, we stop and say the number is happy.
If the number ever becomes a value that we have already seen before,
then the process is stuck in a loop and the number is not happy.

Part 2:-
Changing value:
-The number produced after summing squares of digits

Stored information:
-All previously seen numbers during the process

Stopping conditions:
-If the number becomes 1 → Happy
-If the number repeats → Not Happy
*/

#include<iostream>
using namespace std;

bool isHappy(int n){
    vector<int> storage = {};
    int rem, sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem);
    }
    

}