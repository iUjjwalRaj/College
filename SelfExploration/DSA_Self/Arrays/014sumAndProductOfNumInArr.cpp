#include <iostream>
using namespace std;

int sumArray(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}

int productArray(int a[], int n){
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product = product * a[i];
    }

    return product;
}

int main(){
    int a[] = {8, 5, 2, 3, 1, 7, 4};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Sum of Elements of Array: " << sumArray(a, n) << endl;
    cout << "Product of Elements of Array: " << productArray(a, n) << endl;

    return 0;
}