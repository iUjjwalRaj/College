#include <iostream>
#include <vector>
using namespace std;
// Write a Function to print unique number in array
vector<int> uniqueNumFinder(int a[], int count){
    vector<int> unique;
    for (int i = 0; i < count; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < count; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                // a[i] = 0;
                // a[j] = 0;
                isUnique = false;
                break;
            }
        }

        if (isUnique /*&& a[i] != 0*/)
        {
            unique.push_back(a[i]);
        }
        
    }
    
    return unique;
}

int main(){
    int a[] = {6, 8, 2, 3, 9, 1, 6, 8, 1};
    int count = sizeof(a) / sizeof(a[1]);

    vector<int> result = uniqueNumFinder(a, count);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}