#include <iostream>
#include <string>
using namespace std;
// Given a string str, design a recursive algorithm to convert the string to an integer.


int stringToInteger(string str, int n){
    // base case
    if (n == 0) {
        return 0;
    }

    // recursive case
    // Ask your friend to give you the integer value of smaller problem i.e. (0, m-1)
    string substring = str.substr(0, n-1);
    

    // Extract last charachter
    char lastCharachter = str[n-1];
    int A = stringToInteger(substring, n-1);    

    return A * 10 + lastCharachter - '0';

}
int main(){
    string str = "1234";
    int n = str.size();
    cout << stringToInteger(str, n) << endl;


    return 0;
}