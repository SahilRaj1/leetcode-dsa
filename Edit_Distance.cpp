/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {

        int n = word1.length(), m = word2.length();

        if (n == 0) {
            return m;
        }

        vector<int> curr(m+1, 0);
        vector<int> next(m+1, 0);

        // base case
        for (int i=0; i<=m; i++) {
            next[i] = m - i;
        }

        for (int i=n-1; i>=0; i--) {

            // base case
            curr[m] = n - i;

            for (int j=m-1; j>=0; j--) {

                // character matched
                if (word1[i] == word2[j]) {
                    curr[j] = next[j+1];
                    continue;
                }

                // character not matched
                int ans = INT_MAX;

                // 1. insert
                int insertAns = curr[j+1];
                // 2. delete
                int deleteAns = next[j];
                // 3. replace
                int replaceAns = next[j+1];

                ans = 1 + min(insertAns, min(deleteAns, replaceAns));
                curr[j] = ans;

            }
            next = curr;
        }

        return curr[0];
    }
};

int main() {

    

    return 0;
}