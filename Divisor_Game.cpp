/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool divisorGame(int n) {
        vector<int> dp(1001);
        dp[2]=1;
        for (int i=3; i<=n; i++) {
            for (int j=1; j*j<=n; j++) {
                if (i%j==0 and dp[i-j]==0) {
                    dp[i] = 1;
                }
            }
        }
        return dp[n];
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}