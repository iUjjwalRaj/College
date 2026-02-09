#include <iostream>
using namespace std; 

int main(){
    int arr[] = {1, 2, 3, 4, 5, 7 , 2 ,8, 66, 22}; // declaration of array
    int count = sizeof(arr) / sizeof(int); // calculating the number of elements in the array
    int target;
    cout << "Enter the target element to search in the array: ";
    cin >> target;
    int index = -1; // variable to store the index of the target element in the array. we initialize it to -1 to indicate that the target element is not found in the array.    

    bool found = false; // variable to keep track of whether the target element is found in the array or not
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == target)
        {
            found = true; // if the target element is found in the array, we set found to true
            index = i; // we store the index of the target element in the array
            break; // we break the loop since we have found the target element in the array
        }
    }
    if (found)
    {
        cout << "Target element " << target << " is found in the array at index " << index << "." << endl;
    }
    else
    {
        cout << "Target element " << target << " is not found in the array." << endl;
    }
    return 0;
}