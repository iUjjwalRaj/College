#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    std::vector<int> arr(n); // declaration of array
    std::cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}