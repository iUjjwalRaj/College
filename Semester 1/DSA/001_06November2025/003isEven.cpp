#include<iostream>
using namespace std;
// Function to check if a number is even
bool isEven(int number) {
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    // Call the isEven function
    cout << num << " is " << (isEven(num) ? "even." : "not even.") << endl;
    return 0;
}
    