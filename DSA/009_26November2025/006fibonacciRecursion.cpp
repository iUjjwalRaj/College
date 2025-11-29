#include<iostream>
using namespace std;
// Program to find nth Fibonacci number using recursion
int fibonacci(int n) {
    // base case
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    cout << "Enter a positive integer to find its Fibonacci number: ";
    cin >> n;
    int result = fibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;
    return 0;
}