#include<iostream>
using namespace std;
// Function to print numbers from 1 to n in increasing order using recursion
void printIncreasing(int n) {
    // base case
    if (n == 0) {
        return;
    }
    // recursive case
    // Ask your friend to print numbers from 1 to 'n-1'; i.e., printIncreasing(n-1)
    printIncreasing(n - 1);
    cout << n << " ";
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << "Numbers from 1 to " << number << " in increasing order are: ";
    printIncreasing(number);
    cout << endl;
    return 0;
}