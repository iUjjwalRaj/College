/*Print this pattern: 

1 2 3
4 5 6
7 8 9

*/

#include <iostream>
using namespace std;

int main(){
    int count = 3;
    int num = 1;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
        
    }

    cout << endl;
    cout << endl;
    
    char ch = 'A';

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    

    return 0;
    
}