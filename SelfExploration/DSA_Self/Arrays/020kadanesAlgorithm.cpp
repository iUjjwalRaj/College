#include <iostream>
#include <climits>
using namespace std;
//Question Number 53 LeetCode
int maxSubArraySum(int arr[], int count){
    int currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < count; i++)
    {
        currSum = currSum + arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
        
    }
    return maxSum;
}

int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int count = sizeof(arr) / sizeof(arr[0]); 
    int result;

    result = maxSubArraySum(arr, count);

    cout << "Maximum Sum = " << result;

    return 0;
}