#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v; // declaration of vector
    v.push_back(10); // adding element to the end of the vector
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "Elements in the vector: ";
    for (auto it = v.begin(), end = v.end(); it != end; it++) // using iterators to iterate through the vector. this loop is equivalent to the for each loop in the previous code snippet.
    {                                       // we call this loop as iterator loop. we can also use for each loop to iterate through the vector. we will see that in the next code snippet.
        cout << *it << " ";
    }
    cout << endl;

    cout << "Size of the vector: " << v.size() << endl; // size of the vector

    cout << "Element at index 2: " << v[2] << endl; // accessing element at index 2

    return 0;
}