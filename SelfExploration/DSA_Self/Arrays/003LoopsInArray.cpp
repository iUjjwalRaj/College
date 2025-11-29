#include <iostream>
using namespace std;

// Finding Size of Array

int main(){
    int marks [5] = {99, 100, 54, 36, 88};

    int size = 5;        // Generaly size of Array are given to us

    // if size of array is not given to us then we here how we calculate it:- 

    int sz = sizeof (marks) / sizeof (int);
    cout << "Calculation Size 'sz': " <<  sz << endl;

    // loops: 0 to size-1

    for (int i = 0; i < size; i++)
    {
        cout << "Marks at index " << i << " is equal to: " << marks[i] << endl;
    }
    
    return 0;

}