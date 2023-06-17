/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {

        int n = days.size();
        vector<int> dp(n+1, INT_MAX);
        dp[n] = 0;

        for (int i=n-1; i>=0; i--) {

            // 1 day pass
            int op1 = costs[0] + dp[i+1];

            // 7 day pass
            int ind = i;
            while ((ind < days.size()) and (days[ind] < days[i]+7)) {
                ind++;
            }
            int op2 = costs[1] + dp[ind];

            // 30 day pass
            ind = i;
            while ((ind < days.size()) and (days[ind] < days[i]+30)) {
                ind++;
            }
            int op3 = costs[2] + dp[ind];

            dp[i] = min(op1, min(op2, op3));

        }
        
        return dp[0];

    }
};

int main() {

    

    return 0;
}