class Solution {
public:
    int solve(vector<int>& nums, vector<int> &freq, int i, vector<int>& dp) {
        if (i==0 or i==1) {
            return freq[i];
        }
        if (dp[i]!=-1) {
            return dp[i];
        }
        int take = solve(nums, freq, i-2, dp) + i*freq[i];
        int notTake = solve(nums, freq, i-1, dp);

        return dp[i]=max(take, notTake);
    }

    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(1e4+1, 0), dp(1e4+1, -1);
        for (auto &it: nums) {
            freq[it]++;
        }
        return solve(nums, freq, 1e4, dp);
    }
};