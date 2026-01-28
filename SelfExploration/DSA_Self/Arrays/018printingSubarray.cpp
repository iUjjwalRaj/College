#include <iostream>
using namespace std;
// Write a program to print all subarrays of an array

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int count = sizeof(a) / sizeof(a[0]);

    for (int start = 0; start < count; start++)
    {
        for (int end = 0; end < count; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << a[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}