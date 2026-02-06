/*
Print

1
2 1
3 2 1
4 3 2 1

*/

#include <iostream>
using namespace std;

int main()
{
    int count = 4;
    for (int i = 1; i <= count; i++)
    {
        int num = i;
        for (int j = 0; j < i; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    // char ch = 'A';
    for (int i = 0; i < count; i++)
    {
        char ch = 'A' + i;
        for (int j = i + 1; j > 0; j--)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    
    
    return 0;
}
