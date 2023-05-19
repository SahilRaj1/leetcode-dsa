/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solve(int n, vector<int>& dp) {
        if (n==0) {
            return 1;
        }

        if (dp[n]!=-1) {
            return dp[n];
        }

        int left = solve(n-1, dp);
        int right = 0;
        if (n>1) {
            right = solve(n-2, dp);
        }

        return dp[n] = left+right;
    }

    int climbStairs(int n) {
        const int N = 46;
        vector<int> dp(N, -1);
        return solve(n, dp);
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}