#include<iostream>
using namespace std;
// Write a function to find pair sum in an array (Unoptimised)

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int count = nums.size();

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
            
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