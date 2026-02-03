#include<iostream>
#include<cstring>
using namespace std;
// Function to copy a string from source to destination
void copyString(char* source, char* destination) {
    int length = strlen(source);
    for (int i = 0; i <= length; i++) { // Include null terminator
        destination[i] = source[i];
    }
}
int main() {
    char source[100];
    char destination[100];
    cout << "Enter a string: ";
    cin.getline(source, 100);
    copyString(source, destination);
    cout << "Copied string: " << destination << endl;
    return 0;
}