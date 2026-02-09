/*Problem
You are given an array of size n containing distinct numbers from the range
0 to n.
👉 Exactly one number is missing from this range.
Return the missing number.
🔍 Examples
Input: [3, 0, 1]
Output: 2
Input: [0, 1]
Output: 2
Input: [9,6,4,2,3,5,7,0,1]
Output: 8 */

//solution:-
#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sumNatural = (n*(n+1))/2;
    int sumArray = 0;

    for (int x : nums)
    {
        sumArray = sumArray + x;
    }
    
    int missingNumber = sumNatural - sumArray;

    return missingNumber;
}

int main(){
    vector<int> nums = {3, 0, 1};
    cout << "Missing number: " << missingNumber(nums) << endl;
    return 0;
}