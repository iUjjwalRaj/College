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


    int index = 0, smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (numbers [i] < smallest)
        {
            smallest = numbers [i];
            index = i;
        }
        
    }

    cout << "The smallest number in array is: " << smallest << endl;
    cout << "Index or postion of the smallest number in the array is: " << index << endl;

    return 0;
     
}