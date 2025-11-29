#include <iostream>
using namespace std;
// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    // Call the multiply function
    int result = multiply(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is " << result << "." << endl;
    return 0;
}