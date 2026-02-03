#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// Function to check if two strings are anagrams by sorting
bool areAnagrams(string str1, string str2) {
    // If lengths are not equal, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    return str1 == str2;
}
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}