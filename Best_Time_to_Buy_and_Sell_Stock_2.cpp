/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mn=prices[0], profit=0, mx=prices[0];
        for (int i=1; i<n; i++) {
            if (prices[i]<=prices[i-1]) {
                mn = prices[i];
            } else {
                mx = prices[i];
                profit += mx-mn;
                mn = prices[i];
            }
        }
        return profit;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}