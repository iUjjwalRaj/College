#include <iostream>
#include <climits>
using namespace std;

int main(){
    int size;
    cout << "Enter the Size of the Array: ";
    cin >> size;


    int numbers [size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter the element for " << i << "th index: ";
        cin >> numbers [i];
    }


    int index = 0, largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (numbers [i] > largest)
        {
            largest = numbers [i];
            index = i;
        }
        
    }

    cout << "The largest number in array is: " << largest << endl;
    cout << "Index or postion of the largest number in the array is: " << index << endl;

    return 0;
     
}