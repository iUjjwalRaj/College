#include <iostream>
#include <vector>
using namespace std;
//Write a Function to print intersection of 2 array
vector<int> intersection(int a[], int b[], int acount, int bcount){
    vector<int> intersect;
    for (int i = 0; i < acount; i++)
    {
        bool isIntersecting = false;
        for (int j = 0; j < bcount; j++)
        {
            if (a[i] == b[j])
            {
                isIntersecting = true;
            }
        }
        bool alreadyPresent = false;
        for (int x : intersect) 
        {
            if (x == a[i]) 
            {
                alreadyPresent = true;
                break;
            }
        }
        if (isIntersecting && !alreadyPresent) 
        {
            intersect.push_back(a[i]);
        }
    }
    return intersect;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 5};
    int b[] = {9, 8, 7, 6, 5};
    int acount = sizeof(a) / sizeof(a[0]);
    int bcount = sizeof(b) / sizeof(b[0]);

    vector<int> result = intersection(a, b, acount, bcount);
    
    for (int x : result)
    {
        cout << x << " ";
    }
    
    return 0;
}