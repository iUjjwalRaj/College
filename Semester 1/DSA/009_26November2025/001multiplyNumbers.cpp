#include<iostream>
using namespace std;
// multiplying two numbers with recursion
int multiply(int a, int b) {
    // base case
    if (b == 0) {
        return 0;
    }
    // recursive case
    //Ask your friend to add the a 'b-1' number of times; i.e., multiply(a, b-1)
    int partialProduct = multiply(a, b - 1);
    return a + partialProduct;
    // Or simply
    return a + multiply(a, b - 1);
}
int main() {
    int num1, num2;
    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;
    int result = multiply(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is: " << result << endl;
    return 0;
} 