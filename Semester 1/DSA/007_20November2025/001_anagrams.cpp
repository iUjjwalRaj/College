#include<iostream>
#include<string>
using namespace std;
bool areAnagrams(string str1, string str2) {
    // If lengths are not equal, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Create a frequency array for characters
    int freq[256] = {0};

    // Count frequency of each character in str1
    for (char c : str1) {
        freq[(unsigned char)c]++;
    }

    // Decrease frequency based on characters in str2
    for (char c : str2) {
        freq[(unsigned char)c]--;
        // If frequency goes negative, str2 has an extra character
        if (freq[(unsigned char)c] < 0) {
            return false;
        }
    }

    // If all frequencies are zero, they are anagrams
    return true;
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