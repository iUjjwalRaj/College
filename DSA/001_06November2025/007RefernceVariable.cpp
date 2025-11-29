#include <iostream>
using namespace std;

int main() {
    int originalValue = 10;
    int &refVariable = originalValue; // refVariable is a reference to originalValue

    cout << "Original Value: " << originalValue << endl; // Output: 10
    cout << "Reference Variable: " << refVariable << endl; // Output: 10

    // Modifying the value using the reference variable
    refVariable = 20;

    cout << "After modifying refVariable:" << endl;
    cout << "Original Value: " << originalValue << endl; // Output: 20
    cout << "Reference Variable: " << refVariable << endl; // Output: 20

    return 0;
}