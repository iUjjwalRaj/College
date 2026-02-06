#include <iostream>
using namespace std;

int main(){
    int count = 4;

    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = count - 1; i >= 1; i--)
    {
        for (int j = 1; j <= count - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
    
}