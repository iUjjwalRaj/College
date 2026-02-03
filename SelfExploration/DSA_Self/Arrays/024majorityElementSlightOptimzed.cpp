#include<iostream>
#include<vector>
using namespace std;
// Write a function to find Majority Element {Brute Force Approch}

vector<int> majorityElement(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    for (int val : nums)
    {
        int freq = 0;
        for (int el : nums)
        {
            if (val == el)
            {
                freq++;
            }
            
        }
        if (freq > n/2)
        {
            ans.push_back(val);
            return ans;
        } 
    }
    
    return ans;
}

int main(){
    vector<int> nums = {1, 2, 2, 1, 1};
    int target = 13;
    vector<int> ans = majorityElement(nums, target);
    cout << ans[0] << endl;

    return 0;
}