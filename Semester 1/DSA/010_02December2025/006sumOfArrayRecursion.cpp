#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    return arr[n - 1] + sumOfArray(arr, n - 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = sumOfArray(arr, n);
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}