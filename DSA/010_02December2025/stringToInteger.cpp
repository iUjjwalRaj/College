#include <iostream>
#include <string>
using namespace std;
// Given a string str, design a recursive algorithm to convert the string to an integer.

int stringToIntegerHelper(const string &str, int index) {
    // Base case: if the index reaches the length of the string, return 0
    if (index == str.length()) {
        return 0;
    }
    
    // Recursive case: convert the current character to integer and add it to the result of the next characters
    int digit = str[index] - '0'; // Convert character to integer
    return digit * pow(10, str.length() - index - 1) + stringToIntegerHelper(str, index + 1);
}
int stringToInteger(const string &str) {
    return stringToIntegerHelper(str, 0);
}
int main() {
    string str = "12345";
    int result = stringToInteger(str);
    cout << "The integer value of the string \"" << str << "\" is: " << result << endl;
    return 0;
}