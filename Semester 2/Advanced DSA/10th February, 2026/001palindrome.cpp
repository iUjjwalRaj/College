#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char *str){
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    char str[] = "racecar";
    if (checkPalindrome(str))
    {        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}