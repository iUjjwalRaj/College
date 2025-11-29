#include <iostream>
using namespace std;

void increament(int a) {
    cout << "inside the function before increment: " << a << endl;
    a++;
    cout << "inside the function after increment: " << a << endl;
    
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Before calling Increament Function: " << number << endl;
    cout << "Calling Increament Function..." << endl;  
    increament(number);
    cout << "After returning from Increament Function." << endl;
    cout << "Result after calling Increament Function: " << number << endl;

    return 0;
}