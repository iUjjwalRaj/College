#include <iostream>
using namespace std;

int main(){
    cout << "Hello World!!" << endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);


    auto it = v.begin();
    cout << *it << endl; // Output: 1
    it++;
    cout << *it << endl; // Output: 2
    it++;
    cout << *it << endl; // Output: 4
    auto it2 = v.end(); // Points to one past the last element
    cout << *it2 << endl; 
    it2--;
    cout << *it2 << endl; // Output: 11

    return 0;
}