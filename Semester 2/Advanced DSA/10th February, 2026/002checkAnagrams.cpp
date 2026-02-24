#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool checkAnagrams(string s1, string s2){
    // Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Check if sorted strings are equal
    if (s1 == s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    // Check if the strings are anagrams
    if(checkAnagrams(s1, s2)){
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}