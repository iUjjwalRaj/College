//Given a two strings s1 and s2, compare them and print the result.
#include <iostream>
using namespace std;

int compareString(char s1[], char s2[]){
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] < s2[i])
        {
            return -1;
        }
        else if (s1[i] > s2[i])
        {
            return 1;
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
    {
        return 0;
    }
    else if (s1[i] == '\0')
    {
        return -1;
    }
    else
    {
        return 1;
    }
    
}

int main(){
    char s1[100];
    cout << "Enter first string: ";
    cin >> s1;
    char s2[100];
    cout << "Enter second string: ";
    cin >> s2;
    int result = compareString(s1, s2);
    if (result == 0)
    {
        cout << "Strings are equal." << endl;
    }
    else if (result == -1)
    {
        cout << "String 1 is smaller than String 2." << endl;
    }
    else
    {
        cout << "String 1 is greater than String 2." << endl;
    }
    
}