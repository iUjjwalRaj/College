/*Print this pattern: 

* * * * * * * * * 
* * * *   * * * * 
* * *       * * * 
* *           * * 
*               * 

*/

#include<iostream>
using namespace std;
int main() {
    int n = 5;
    // cin >> n;
    int star = n, space = -1, row = 1;
    for (int i = 0; i < ; i++)
    {
        for (int j = n; j > 0; j--)
        {
            cout << "* ";
        }
        for (int k = -1; k > ; k += 2)
        {
            cout << "  ";
        }
        for (int l = n-1; l > 0; l--)
        {
            cout << "* ";
        }

        cout << endl;
        
    }
    return 0;
}