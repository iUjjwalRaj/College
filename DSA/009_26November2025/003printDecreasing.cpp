#include<iostream>
using namespace std;
// Function to print numbers from n to 1 in decreasing order using recursion
void printDecreasing(int n) {
    // base case
    if (n == 0) {
        return;
    }
    // print current number
    cout << n << " ";
    // recursive case
    printDecreasing(n - 1);
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << "Numbers from " << number << " to 1 in decreasing order are: ";
    printDecreasing(number);
    cout << endl;
    return 0;
}