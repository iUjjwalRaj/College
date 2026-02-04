// 1283. Find the Smallest Divisor Given a Threshold
// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
#include <iostream>
#include <vector>
using namespace std;

int smallestDivisor(vector<int>& nums, int threshold) {
    int left = 1;
    int right = *max_element(nums.begin(), nums.end());
    int result = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int total = 0;

        for (int num : nums) {
            total += (num + mid - 1) / mid; // Equivalent to ceil(num / mid)
        }

        if (total <= threshold) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    int divisor = smallestDivisor(nums, threshold);
    cout << "The smallest divisor is: " << divisor << endl;
    return 0;
}
  