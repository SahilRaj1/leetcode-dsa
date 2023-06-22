/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solve(int n, vector<int> &dp) {

        if (n<=1) {
            return 1;
        }

        if (dp[n]!=-1) {
            return dp[n];
        }

        int ans = 0;
        for (int i=1; i<=n; i++) {
            ans += solve(i-1, dp) * solve(n-i, dp);
        }
        
        return dp[n] = ans;

    }

    int numTrees(int n) {

        vector<int> dp(20, 0);
        dp[0] = dp[1] = 1;

        for (int j=2; j<=n; j++) {

            for (int i=1; i<=j; i++) {
                dp[j] += dp[i-1] * dp[j-i];
            }
                    
        }
        
        return dp[n];

    }
};

int main() {

    

    return 0;
}