#include <iostream>
using namespace std;
// Function to check if a number is even
void isEven(int number) {
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is not an even number." << endl;
    }
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    // Call the isEven function
    isEven(num);
    return 0;
}