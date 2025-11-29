#include <iostream>
using namespace std;

// input array values with loop

int main(){
    int size;

    cout << "Input the size or the amount of marks you want to enter: ";
    cin >> size;

    int marks [size];


    for (int i = 0; i < size; i++)
    {
        cout << "Input the index " << i << " marks you want to enter: ";
        cin >> marks [i];        
    }
    
    // loops: 0 to size-1

    for (int j = 0; j < size; j++)
    {
        cout << "Marks at index " << j << " is equal to: " << marks[j] << endl;
    }
    
    return 0;

}