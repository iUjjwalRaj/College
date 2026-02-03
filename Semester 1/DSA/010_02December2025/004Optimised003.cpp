#include <iostream>
#include <string>
using namespace std;

string moveXToEnd(string str) {
    if (str.length() == 0){
         return "";
    }

    char first = str[0];
    string rest = moveXToEnd(str.substr(1));

    if (first == 'x')
        return rest + first;
    else
        return first + rest;
}

int main() {
    string s;
    cin >> s;
    cout << moveXToEnd(s);
    return 0;
}
