#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50}; // declaration of array
    cout << "Elements in the array: ";
    for(int x : arr) // for each loop to iterate through the array
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

