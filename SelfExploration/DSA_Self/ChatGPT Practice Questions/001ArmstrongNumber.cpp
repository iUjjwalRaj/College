/*Problem
You are given a positive integer n.
👉 Return true if the number is an Armstrong number, otherwise return false.
📘 What is an Armstrong Number?
A number is an Armstrong number if:
The sum of each digit raised to the power of number of digits
is equal to the original number.
🔍 Examples
153 → true
👉 1³ + 5³ + 3³ = 1 + 125 + 27 = 153
1634 → true
👉 1⁴ + 6⁴ + 3⁴ + 4⁴ = 1634
123 → false*/


#include<iostream>
using namespace std;

bool isArmstrong(int num){
    // counting the digits in number
    int count = 0, temp = num;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }

    // calculation
    int rem, digitPower = 1, result = 0, original = num;
    for (int i = 0; i < count; i++)
    {
        rem = num % 10;
        for (int j = 0; j < count; j++)
        {
            digitPower = digitPower * rem;
        }
        result = result + digitPower;
        digitPower = 1;
        num = num / 10;
    }

    // comparision
    if (original == result)
    {
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if (isArmstrong(num))
    {
        cout<<num<<" is an Armstrong number."<<endl;
    }
    else{
        cout<<num<<" is not an Armstrong number."<<endl;
    }
    
    return 0;
}