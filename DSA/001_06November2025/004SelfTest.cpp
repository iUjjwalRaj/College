#include<iostream>
using namespace std;
// Function to multiply two numbers
int multiply(int a, int b){
    int result = a * b;

    return result;
}
// Calling the multiply function
int main(){
    cout << "Enter first integer: ";
    int num1, num2;
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "The product of " << num1 << " and " << num2 << " is: " << multiply (num1, num2) << endl;

    return 0;

}