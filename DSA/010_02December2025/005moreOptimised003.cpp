#include <iostream>
#include <string>
using namespace std;

string moveXToEndOptimized(string s, int index, int &countX) {
    if (index == s.length()) {
        return string(countX, 'x'); // append all x’s at once
    }

    if (s[index] == 'x') {
        countX++;
        return moveXToEndOptimized(s, index + 1, countX);
    }

    return s[index] + moveXToEndOptimized(s, index + 1, countX);
}

int main() {
    string s;
    cin >> s;
    int countX = 0;

    string result = moveXToEndOptimized(s, 0, countX);
    cout << result;
}
