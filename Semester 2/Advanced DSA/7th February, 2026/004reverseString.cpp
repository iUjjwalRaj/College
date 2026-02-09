#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    char arr[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // declaration of char array
    cout << "Elements in the char array before reversing: ";
    cout << arr << endl; // printing the char array. this will print the entire char array as a string. this is because when we print a char array, it is treated as a string and it will print until it finds a null character '\0'. since we have added a null character at the end of the char array, it will print the entire char array as a string.

    // reversing the char array
    int start = 0, end = 4; // we have 5 characters in the char array, so the last index is 4
    while (start < end)
    {   char temp = arr[start]; // storing the value at start index in a temporary variable
        arr[start] = arr[end]; // assigning the value at end index to start index
        arr[end] = temp; // assigning the value stored in temporary variable to end index
        start++; // incrementing start index
        end--; // decrementing end index
    }
    cout << "Elements in the char array after reversing: ";
    cout << arr << endl; // printing the reversed char array

cout << endl << "Method 2" << endl;

    // Method 2: using swap function from algorithm library
    char arr1[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // declaration of char array
    cout << "Elements in the char array before reversing: ";
    cout << arr1 << endl; // printing the char array. this will print the entire char array as a string. this is because when we print a char array, it is treated as a string and it will print until it finds a null character '\0'. since we have added a null character at the end of the char array, it will print the entire char
    // array as a string.
    int n = sizeof(arr1) / sizeof(arr1[0]) - 1; // calculating the number of characters in the char array. we subtract 1 from the result to exclude the null character.
    for (int i = 0; i < n / 2; i++)
    {        swap(arr1[i], arr1[n - i - 1]); // swapping the characters at index i and n - i - 1
    }
    cout << "Elements in the char array after reversing: ";
    cout << arr1 << endl; // printing the reversed char array
    return 0;
}