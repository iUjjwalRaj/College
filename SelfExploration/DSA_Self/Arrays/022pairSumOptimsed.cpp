#include<iostream>
using namespace std;
// Write a function to find pair sum in an array (Optimised)

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int count = nums.size();
    int i = 0, j = count - 1;
    while (i < j)
    {
        int sum = nums[i] + nums[j];
        if (sum > target)
        {
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}