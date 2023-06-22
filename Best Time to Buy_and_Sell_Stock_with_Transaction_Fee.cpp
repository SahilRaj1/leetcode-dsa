/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solve(vector<int>& prices, int i, int buy, int fee, vector<vector<int>> &dp) {

        if (i == prices.size()) {
            return 0;
        }

        if (dp[i][buy] != -1) {
            return dp[i][buy];
        }

        int profit = 0;

        if (buy) {
            int takeBuy = -prices[i] + solve(prices, i+1, 0, fee, dp);
            int ntakeBuy = 0 + solve(prices, i+1, 1, fee, dp);
            profit = max(takeBuy, ntakeBuy);
        } else {
            int takeSell = prices[i] - fee + solve(prices, i+1, 1, fee, dp);
            int ntakeSell = 0 + solve(prices, i+1, 0, fee, dp);
            profit = max(takeSell, ntakeSell);
        }

        return dp[i][buy] = profit;

    }

    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int>(2, -1));
        return solve(prices, 0, true, fee, dp);
    }
};

int main() {

    

    return 0;
}