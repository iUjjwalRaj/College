/*Problem
You are given a positive integer n.
👉 Return true if the number is a Perfect Number, otherwise return false.
📘 What is a Perfect Number?
A Perfect Number is a number that is equal to the sum of its proper divisors
(excluding the number itself).
🔍 Examples
6 → true
Proper divisors: 1, 2, 3
Sum = 6
28 → true
Proper divisors: 1, 2, 4, 7, 14
Sum = 28
12 → false
Proper divisors: 1, 2, 3, 4, 6
Sum = 16*/


#include<iostream>
using namespace std;

bool checkPerfectNumber(int num){
    int sum = 0;
    if (num == 1)
    {
        return true;
    }
    

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }

    }

    if (sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}


int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if (checkPerfectNumber(num))
    {
        cout<<num<<" is a Perfect number."<<endl;
    }
    else
    {
        cout<<num<<" is not a Perfect number."<<endl;
    }
    
}