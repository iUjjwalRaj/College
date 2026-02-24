// Take as input S, a string. Write a function that toggles the case of all characters in the string. Print the value returned.


// Input Format
// String


// Constraints
// Length of string should be between 1 to 1000.


// Output Format
// String


// Sample Input
// abC
// Sample Output
// ABc
// Explanation
// Toggle Case means to change UpperCase character to LowerCase character and vice-versa.


#include <iostream>
#include <string>
using namespace std;

string toggleCase(string s){
    
    for (int i = 0;s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << toggleCase(s) << endl;
    return 0;
}