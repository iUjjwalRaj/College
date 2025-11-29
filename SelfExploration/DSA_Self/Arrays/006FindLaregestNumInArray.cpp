#include <iostream>
#include <climits>
using namespace std;

// finding largest number in array

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int numbers [size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elemnet of of " << i << "th index: ";
        cin >> numbers [i];
    }


    // Method 1:-
    int largest_m1 = INT_MIN;
    for (int j = 0; j < size; j++)
    {
        if (numbers [j] > largest_m1)
        {
            largest_m1 = numbers [j];
        }
        
    }

    cout << "largest_m1 is equal to: " << largest_m1 << endl;
    
    
    // Method 2:-
    int largest_m2 = INT_MIN;
    for (int k = 0; k < size; k++)
    {
        largest_m2 = max (largest_m2, numbers[k]);
    }

    cout << "largest_m2  is equal to: " << largest_m2 << endl;
    
    return 0;
}