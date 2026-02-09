#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v; // declaration of vector

    cout << "Size of vector: " << v.size() << endl; // size of vector
    cout << "Capacity of vector: " << v.capacity() << endl; // capacity of vector
    cout << endl << "Pushing elements to vector..." << endl;   
    v.push_back(1); // adding element to vector
    cout << "Size of vector: " << v.size() << endl; // size of vector
    cout << "Capacity of vector: " << v.capacity() << endl; // capacity of vector

    cout << endl << "Pushing elements to vector..." << endl;   
    v.push_back(2); // adding element to vector
    cout << "Size of vector: " << v.size() << endl; // size of vector
    cout << "Capacity of vector: " << v.capacity() << endl; // capacity of vector

    cout << endl << "Pushing elements to vector..." << endl;   
    v.push_back(3); // adding element to vector
    cout << "Size of vector: " << v.size() << endl; // size of vector
    cout << "Capacity of vector: " << v.capacity() << endl; // capacity of vector

    cout << endl << "Pushing elements to vector..." << endl;   
    v.push_back(4); // adding element to vector
    cout << "Size of vector: " << v.size() << endl; // size of vector
    cout << "Capacity of vector: " << v.capacity() << endl; // capacity of vector

    cout << endl << "Pushing elements to vector..." << endl;
    v.push_back(5); // adding element to vector
    cout << "Size of vector: " << v.size() << endl; // size of vector
    cout << "Capacity of vector: " << v.capacity() << endl; // capacity of vector

    cout << endl << "Pushing elements to vector..." << endl;
    v.push_back(6); // adding element to vector
    cout << "Size of vector: " << v.size() << endl; // size of vector
    cout << "Capacity of vector: " << v.capacity() << endl; // capacity of vector

    return 0;
}