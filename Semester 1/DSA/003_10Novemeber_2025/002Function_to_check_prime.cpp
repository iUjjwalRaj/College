#include <iostream>
using namespace std;
// Function to check prime number

int prime(int &a){
    bool check = false;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            check = true;
        }
        else if (a == 2)
        {
            check = true;
            break;
        }
        
        
    }
    return check;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (prime(num))
        cout << num << " is not a prime number." << endl;
    else
        cout << num << " is a prime number." << endl;
    return 0;
}