#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v; // declaration of vector
    v.push_back(1); // adding element to the end of the vector
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << "Elements in the vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Size of the vector: " << v.size() << endl; // size of the vector
    cout << "Capacity of the vector: " << v.capacity() << endl; // capacity of the vector
    cout << "Element at index 2: " << v[2] << endl; // accessing element at index 2

    return 0;
}