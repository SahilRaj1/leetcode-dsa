/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    const int M = 1e9+7;

    int numRollsToTarget(int n, int k, int target) {

        vector<int> prev(target+1, 0);
        vector<int> curr(target+1, 0);
        prev[0] = 1;

        for (int i=1; i<=n; i++) {
            for (int j=1; j<=target; j++) {

                int ways = 0;
                for (int num=1; num<=k; num++) {
                    if (j >= num) {
                        ways = (ways + 0LL + prev[j-num]) % M;
                    }
                }

                curr[j] = ways;

            }
            prev = curr;
        }

        return prev[target];

    }
};

int main() {

    

    return 0;
}