#include <iostream>
using namespace std;
// Function to print first N Prime numbers
int printNPrimeNumbers(int N) {
    int count = 0;   // Count of prime numbers found

    for (int num = 2; count < N; num++) 
    {
        bool isPrime = true;

        // Check if num is prime
        for (int i = 2; i * i <= num; i++) 
        {
            if (num % i == 0) 
            {
                isPrime = false;
                break;
            }
        }

        // If num is prime, print it and increas3 count +1;
        if (isPrime) 
        {
            cout << num << " ";
            count++;
        }
        
    }
    cout << endl; 
    return 0;
}
int main() {
    int N;
    cout << "Enter the number of prime numbers to print: ";
    cin >> N;
    printNPrimeNumbers(N);
    return 0;
}
