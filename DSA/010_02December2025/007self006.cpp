#include <iostream>
using namespace std;
// Finding sum of array using Recursion

int sumOfArray(int arr[], int limit){
    // Base case
    if (limit == 0)
    {
        return 0;
    }

    // recursive case

    int n;
    n = arr [limit - 1] + sumOfArray(arr, limit - 1);

    return n;
}


int main(){
    int limit;
    cout << "Enter the Number of Elements in the Array: ";
    cin >> limit;

    int arr[limit];
    cout << "Enter the Elements of the Array: ";
    for (int i = 0; i < limit; i++)
    {
        cin >> arr[i];
    }

    int sum = sumOfArray(arr, limit);
    cout << "Sum of All Elements of the given Array is: " << sum << endl;

    return 0;
}