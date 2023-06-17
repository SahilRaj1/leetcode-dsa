/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {

        int n = values.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, INT_MAX));
        
        // base case
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (i+1 == j) {
                    dp[i][j] = 0;
                }
            }
        }

        // filling dp array
        for (int i=n-1; i>=0; i--) {
            for (int j=0; j<n; j++) {
                for (int k=i+1; k<j; k++) {
                    int score = values[i] * values[j] * values[k];
                    int total = score + dp[i][k] + dp[k][j];
                    dp[i][j] = min(dp[i][j], total);
                }
            }
        }

        return dp[0][n-1];

    }
};

int main() {

    

    return 0;
}