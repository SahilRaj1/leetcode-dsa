/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {

        int n = obstacles.size();
        vector<vector<int>> dp(4, vector<int>(n, 1e9));
        for (int i=0; i<=3; i++) {
            dp[i][n-1] = 0;
        }

        for (int currpos=n-2; currpos>=0; currpos--) {
            for (int currlane=1; currlane<=3; currlane++) {

                // no obstacle in next position of current lane
                if (obstacles[currpos+1] != currlane) {
                    dp[currlane][currpos] = dp[currlane][currpos+1];
                }

                // obstacle in next position of current lane
                else {
                    int ans = 1e9;
                    for (int i=1; i<=3; i++) {
                        if (i != currlane and obstacles[currpos] != i) {
                            ans = min(ans, 1 + dp[i][currpos+1]);
                        }
                    }
                    dp[currlane][currpos] = ans;
                }

            }
        }

        return min(dp[2][0], min(1 + dp[1][0], 1 + dp[3][0]));
        
    }
};

int main() {

    

    return 0;
}