#include<iostream>
using namespace std;
//Given a positive integer N, design a recursive algorithm to spell it.
void spellNumber(int n) {
    // base case
    if (n == 0) {
        return;
    }
    // recursive case
    spellNumber(n / 10);
    // print last digit
    int digit = n % 10;
    switch (digit) {
        case 0: cout << "zero "; break;
        case 1: cout << "one "; break;
        case 2: cout << "two "; break;
        case 3: cout << "three "; break;
        case 4: cout << "four "; break;
        case 5: cout << "five "; break;
        case 6: cout << "six "; break;
        case 7: cout << "seven "; break;
        case 8: cout << "eight "; break;
        case 9: cout << "nine "; break;
    }
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << "The spelling of " << number << " is: ";
    if (number == 0) {
        cout << "zero";
    } else {
        spellNumber(number);
    }
    cout << endl;
    return 0;
}