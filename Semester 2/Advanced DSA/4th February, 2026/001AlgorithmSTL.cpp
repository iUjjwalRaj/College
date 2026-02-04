//STL = Standard Template Library
#include <iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
    int n = sizeof(arr) / sizeof(int);

    // sorting a sequence (n.log n)
    cout << endl << "Sorting: " << endl;
    sort(arr, arr+n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl << "Reversing: " << endl;

    //reversing a sequence
    reverse(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    //finding the minimum value in sequence 
    cout << endl << "Minimum Value: " << endl;
    cout << *min_element(arr, arr + n) << endl;

    //finding the maximum value in sequence 
    cout << endl << "Maximum Value: " << endl;
    cout << *max_element(arr, arr + n) << endl;

    //finding a value in a sequence 
    int key = 10;
    auto ptr = find(arr, arr + n, key);

    if(ptr != arr+n)
    {
        cout << key << " Found at index: " << (ptr - arr) << endl;
    }else{
        cout << "Element Not found."<< endl;
    }

    //Counting a value in a sequence - O(n)
    cout << "Counting Number of time target appeared in an Array: " << endl;
    cout << count(arr, arr + n, key) << endl;

    //Reversing the array again to make it sorted again
    cout << "Reversing the array again to make it sorted again: " << endl;
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Testing if value is present in a sorted sequence using binary search - O(log n)
    cout << "Testing if value is present in a sorted sequence using binary search: " << endl;
    binary_search(arr, arr + n, key) ? cout << "is Found!" << endl : cout << "is not Found!" << endl;

    // Finding Lower bound for a value in a sorted sequence - O(log n)

    //it will give the pointer to the first element which is not less than the key
    //what is lower bound? -> first element >= key
    cout << "Finding Lower bound for a value in a sorted sequence: " << endl;
    key = 30;
    auto lb = lower_bound(arr, arr + n, key);
    cout << "Lower Bound of " << key << " is at index: " << (lb - arr) << endl;

    // Finding Upper bound for a value in a sorted sequence - O(log n)

    //it will give the pointer to the first element which is greater than the key
    //what is upper bound? -> first element > key
    cout << "Finding Upper bound for a value in a sorted sequence: " << endl;
    auto ub = upper_bound(arr, arr + n, key);
    cout << "Upper Bound of " << key << " is at index: " << (ub - arr) << endl;

    //counting occurrences of a value in a sorted sequence - O(log n)
    cout << "counting occurrences of a value in a sorted sequence: " << endl;
    cout << "Count of " << key << " is: " << (ub - lb) << endl;
    return 0;
}