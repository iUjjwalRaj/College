#include <iostream>
#include <string>
using namespace std;
// Given a string "str", design a recursive algorithm to move all the 'x' characters to the end of the given string such that relative position of non-x characters doesn't change.  
// Example :-
// Input : str = "xaxbxc"  
// Output : "abcxxx"  

string moveXToEnd(string str, int n) {
    // Base case
    if (n == 0) {
        return "";
    }

    // Recursive case
    char firstChar = str[0];
    string smallerString = str.substr(1);
    string resultFromSmallerString = moveXToEnd(smallerString, n - 1);

    if (firstChar == 'x') {
        return resultFromSmallerString + firstChar;
    } else {
        return firstChar + resultFromSmallerString;
    }
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int n = str.size();
    string result = moveXToEnd(str, n);
    cout << "Output: " << result << endl; // Output: "abcxxx"
    return 0;
}