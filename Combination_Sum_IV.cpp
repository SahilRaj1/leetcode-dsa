/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solve(vector<int>& nums, int target, vector<int> &dp) {
        
        // base cases
        if (target == 0) {
            return 1;
        }

        if (target < 0) {
            return 0;
        }

        if (dp[target] != -1) {
            return dp[target];
        }

        int ans = 0;
        for (int i=0; i<nums.size(); i++) {
            ans += solve(nums, target-nums[i], dp);
        }

        return dp[target] = ans;

    }

    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(1010, -1);
        return solve(nums, target, dp);
    }
};

int main() {

    

    return 0;
}