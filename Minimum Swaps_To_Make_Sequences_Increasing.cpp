/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solve(vector<int>& nums1, vector<int>& nums2, int i, bool swapped, vector<vector<int>> &dp) {

        if (i == nums1.size()) {
            return 0;
        }

        if (dp[i][swapped] != -1) {
            return dp[i][swapped];
        }

        int prev1 = nums1[i-1];
        int prev2 = nums2[i-1];
        int ans = INT_MAX;

        if (swapped) {
            swap(prev1, prev2);
        }

        // no swap
        if (nums1[i] > prev1 and nums2[i] > prev2) {
            ans = solve(nums1, nums2, i+1, 0, dp);
        }

        // swap
        if (nums1[i] > prev2 and nums2[i] > prev1) {
            ans = min(ans, 1 + solve(nums1, nums2, i+1, 1, dp));
        }

        return dp[i][swapped] = ans;

    }

    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        nums1.insert(nums1.begin(), -1);
        nums2.insert(nums2.begin(), -1);
        vector<vector<int>> dp(n+1, vector<int>(2, -1));
        return solve(nums1, nums2, 1, false, dp);
    }
};

int main() {

    

    return 0;
}