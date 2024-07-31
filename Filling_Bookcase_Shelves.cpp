/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<vector<int>>& books, int shelfWidth, int n, int i, vector<int> &dp) {
        if (i == n) {
            return 0;
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        int ans = INT_MAX, height = 0, width = 0;
        for (int j=i; j<n; j++) {
            width += books[j][0];
            if (width > shelfWidth) {
                break;
            }
            height = max(height, books[j][1]);
            ans = min(ans, height + solve(books, shelfWidth, n, j+1, dp));
        }
        return dp[i] = ans;
    }

    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n = books.size();
        vector<int> dp(n+1, -1);
        return solve(books, shelfWidth, n, 0, dp);
    }
};

int main() {

    

    return 0;
}