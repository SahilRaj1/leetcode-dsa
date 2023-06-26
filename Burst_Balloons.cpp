/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solve(int lo, int hi, vector<int>& nums, vector<vector<int>> &dp) {

        if (lo > hi) {
            return 0;
        }

        if (dp[lo][hi] != -1) {
            return dp[lo][hi];
        }

        int ans = INT_MIN;
        for (int i=lo; i<=hi; i++) {
            int temp = nums[lo-1] * nums[i] * nums[hi+1] + solve(lo, i-1, nums, dp) + solve(i+1, hi, nums, dp);
            ans = max(ans, temp);
        }

        return dp[lo][hi] = ans;

    }

    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        vector<vector<int>> dp(n+10, vector<int>(n+10, -1));
        return solve(1, n, nums, dp);
    }
};

int main() {

    

    return 0;
}