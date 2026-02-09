#include <iostream>
using namespace std;

int main(){
    char arr[] = "coding blocks" ; // declaration of char array
    cout << endl;
    cout << "Elements in the char array: ";
    int count = 0;
    for (char x : arr) // for each loop to iterate through the char array
    {
        cout << x << " ";
        count++;
        if (x == '\0') // if we encounter the null character, we break the loop
        {
            break;
        }
    }
    cout << endl;
    cout << "Length of the string: " << count - 1 << endl; // we subtract 1 from the count to get the length of the string. this is because we have counted the null character as well.
    cout << endl;
    return 0;
}