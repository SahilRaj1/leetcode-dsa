/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solve(vector<int> &arr, int n, vector<int> &dp) {
        
        int prev2 = arr[0], prev1 = 0;
        for (int i=1; i<n; i++) {
            int take = arr[i] + prev1;
            int ntake = 0 + prev2;
            prev1 = prev2;
            prev2 = max(take, ntake);
        }

        return prev2;

    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }

        vector<int> first, second;
        for (int i=0; i<n; i++) {
            if (i != n-1) {
                first.push_back(nums[i]);
            }
            if (i != 0) {
                second.push_back(nums[i]);
            }
        }

        vector<int> dp1(n+10, 0), dp2(n+10, 0);
        int ans1 = solve(first, n-1, dp1);
        int ans2 = solve(second, n-1, dp2);

        return max(ans1, ans2);
    }
};

int main() {

    

    return 0;
}