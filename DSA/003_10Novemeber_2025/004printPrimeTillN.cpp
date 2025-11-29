#include <iostream>
using namespace std;
// Function to print all prime numbers up to N
int printPrimesTillN(int N) {
    for (int num = 2; num <= N; num++) {
        bool isPrime = true;
        // Check if num is prime
        for (int i = 2; i * i <= num; i++) {    
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        // If num is prime, print it
        if (isPrime) {
            cout << num << " ";
        }
    }
    cout << endl; // New line after printing all prime numbers
    return 0;
}
int main() {
    int N;
    cout << "Enter the value of N to print all prime numbers till N: ";
    cin >> N;
    printPrimesTillN(N);
    return 0;   
}