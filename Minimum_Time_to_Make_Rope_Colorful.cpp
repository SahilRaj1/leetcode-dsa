/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum = 0, mx = 0, ans = 0;
        for (int i=1; i<neededTime.size(); i++) {
            if (colors[i] != colors[i-1]) {
                if (sum > 0) {
                    ans += (sum-mx);
                    sum = 0;
                    mx = 0;
                }
            } else {
                mx = sum == 0 ? max(neededTime[i], neededTime[i-1]) : max(mx, neededTime[i]);
                sum += sum == 0 ? neededTime[i] + neededTime[i-1] : neededTime[i];
            }
        }
        ans += (sum-mx);
        return ans;
    }
};

int main() {

    

    return 0;
}