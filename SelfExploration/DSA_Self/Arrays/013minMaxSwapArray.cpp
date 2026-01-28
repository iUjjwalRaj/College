#include <iostream>
using namespace std;
//Write a function to Swap Mininmum and Maximum of an Array
void swapMinMax(int a[], int n){
    int getMin = INT_MAX, getMax = INT_MIN;
    int indexMax, indexMin;
    
    for (int i = 0; i < 6; i++)
    {
        if (getMin > a[i])
        {
            getMin = a[i];
            indexMin = i;
        }
        if (getMax < a[i])
        {
            getMax = a[i];
            indexMax = i;
        }
    }

    swap(a[indexMin], a[indexMax]);
}
int main(){
    int a[] = {3, 5, 2, 9, 6, 1};
    int n = sizeof(a)/sizeof(a[0]);

    swapMinMax(a, n);

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}