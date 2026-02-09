#include <iostream>
using namespace std;

int main(){
    char arr[5] = {'a', 'b', 'c', 'd', 'e'}; // declaration of char array
    cout << "Elements in the char array: ";
    
    cout << arr << endl; // printing the char array. this will print the entire char array as a string. this is because when we print a char array, it is treated as a string and it will print until it finds a null character '\0'. since we have not added a null character at the end of the char array, it will print the entire char array as a string.

    cout << endl;

    char str[6] = {'a', 'b', 'c', 'd', 'e', '\0'}; // declaration of char array with null character
    cout << "Elements in the char array: ";
    
    cout << str << endl; // printing the char array. this will print the entire char array as a string. this is because when we print a char array, it is treated as a string and it will print until it finds a null character '\0'. since we have added a null character at the end of the char array, it will print the entire char array as a string.

    return 0;
}