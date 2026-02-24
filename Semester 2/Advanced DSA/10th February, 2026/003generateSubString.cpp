#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
    char exp[100];
    cout << "Eneter the word: ";
    cin >> exp;
    int count = strlen(exp);

    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << exp[k];
            }
            cout << endl;
        }
    }
    return 0;
}