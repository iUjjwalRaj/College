#include<iostream>
using namespace std;
//Given two non-negative integers x and y, design a recursive algorithm to compute x^y.
int exponent(int x, int y) {
    // base case
    if (y == 0) {
        return 1; // any number to the power of 0 is 1
    }
    // recursive case
    return x * exponent(x, y - 1);
}
int main() {
    int base, power;
    cout << "Enter base (x): ";
    cin >> base;
    cout << "Enter exponent (y): ";
    cin >> power;
    int result = exponent(base, power);
    cout << base << " raised to the power of " << power << " is: " << result << endl;
    return 0;
}