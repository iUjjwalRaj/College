#include <iostream>
using namespace std;

//Declraing Increament function
int increament (int a){
    return ++a;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Result of Increament Function is: " << increament(num) << endl;

    return 0;
}