#include <iostream>
using namespace std;
// Searching an element in array using Linear Search
int main(){
    int size;
    cout << "Enter size of an Array: ";
    cin >> size;

    int search [size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the" << i << "th element of the array: ";
        cin >> search [i];
    }

    int find, index;
    bool result = false;

    cout << "Enter the element you need to find in the array: ";
    cin >> find;

    for (int i = 0; i < size; i++)
    {
        if (search [i] == find)
        {
            index = i;
            cout << "Element " << find << " was found on " << index << " index position of the Array";
            result = true;
        }
        
    }

    if (result == true)
    {
        cout << "\nTask completed succesfully";
    }
    else if (result == false)
    {
        cout << "\nYour entered value was invalid and wasnt found in the array";
    }
    
    return 0;
}