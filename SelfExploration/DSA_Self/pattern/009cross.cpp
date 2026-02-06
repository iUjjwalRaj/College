#include <iostream>
using namespace std;

int main(){
    int count = 4;

    for (int i = count; i >= 1; i--)
    {
        for (int j = 1; j <= count - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i -1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
            
        }
        cout << endl;
        
        
    }
    
}
