#include <iostream>
using namespace std;
// PASS BY REFERENCE IN ARRAYS
void updateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 10; // Increment each element by 10 times
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int numbers[size];
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter Element " << i << ": ";
        cin >> numbers[i];
    }

    cout << "Array before update:" << endl;
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Call the function to update the array
    updateArray(numbers, size);

    cout << "Array after getting updated in the function:" << endl;
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}