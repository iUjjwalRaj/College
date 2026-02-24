/*Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.


Input Format
A single String S


Constraints
1 < = length of String < = 1000


Output Format
The compressed String.


Sample Input
aaabbccdsaa
Sample Output
a3b2c2d1s1a2
Explanation
In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.*/

#include <iostream>
#include <string>
using namespace std;

string something(string s) {
    int n = s.length(); // Correct way to get length
    if (n == 0) return "";

    string final = "";
    int count = 1; // Start count at 1 for the first character

    for (int i = 0; i < n; i++) {
        // If the next character is the same, just increment count
        if (i + 1 < n && s[i] == s[i + 1]) {
            count++;
        } 
        // If it's different (or it's the end of the string), append results
        else {
            final.push_back(s[i]);
            final += to_string(count); // Converts integer to string (e.g., 3 to "3")
            count = 1; // Reset for the next unique character
        }
    }
    return final;
}

int main() {
    string s;
    if (!(cin >> s)) return 0;
    string result = something(s);
    cout << result << endl;
    return 0;
}