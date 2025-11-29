#include <iostream>
#include <climits>
using namespace std;
// finding smallest number in array

int main(){
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int numbers [size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number at index " << i << ": ";
        cin >> numbers [i];
    }

    int smallest = INT_MAX;

    for (int j = 0; j < size; j++)
    {
        if (numbers [j] < smallest)
        {
            smallest = numbers [j];
        }
        
    }

    cout << "The smallest number in the array is: " << smallest << endl;



    // there's also another way to solve it using min function

    int smallest2 = INT_MAX;

    for (int u = 0; u < size; u++)
    {
        smallest2 = min (smallest2, numbers [u]);
    }

    cout << "The smallest number in the array is: " << smallest2 << endl;    
    
    return 0;
}
