#include<iostream>

using namespace std;
// Leetcode 2654. Minimum Number of Operations to Make All Array Elements Equal to 1
int minOperations(int arr[], int n) {
    int countOfOnes = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            countOfOnes++;
        }
    }
    if (countOfOnes > 0) {
        return n - countOfOnes;
    }

    int minGCDSubarrayLength = n + 1;

    for (int i = 0; i < n; i++) {
        int currentGCD = arr[i];
        for (int j = i + 1; j < n; j++) {
            currentGCD = gcd(currentGCD, arr[j]);
            if (currentGCD == 1) {
                minGCDSubarrayLength = min(minGCDSubarrayLength, j - i + 1);
                break;
            }
        }
    }

    if (minGCDSubarrayLength == n + 1) {
        return -1;
    }

    return n - 1 + (minGCDSubarrayLength - 1);
}
int main() {
    int arr = [];
    cin >> arr[];
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = minOperations(arr, n);
    cout  << result << endl;
    return 0;
}