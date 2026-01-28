#include<iostream>
using namespace std;


void reverseArray(int arr[], int size, int start, int end){
    for (int i = 0; i < size; i++)
    {
        if (start > end)
        {
            break;
        }
        swap(arr[start], arr[end]);
        start++;
        end--;
        
    }

}

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,};
    int size = 9;
    int start = 0, end = size;

    reverseArray(arr, size, start, end);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
    
}