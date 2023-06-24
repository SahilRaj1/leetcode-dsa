/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {

        int n = s.length(), m = p.length();

        vector<int> prev(m+1, 0);
        vector<int> curr(m+1, 0);

        // base cases
        prev[0] = true;
        for (int j=1; j<=m; j++) {
            bool flag = true;
            for (int k=1; k<=j; k++) {
                // leftover pattern does not contain '*' 
                if (p[k-1] != '*') {
                    flag = false;
                    break;
                }
            }
            prev[j] = flag;
        }

        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {

                // match
                if (s[i-1] == p[j-1] or p[j-1] == '?') {
                    curr[j] = prev[j-1];
                }

                // star
                else if (p[j-1] == '*') {
                    curr[j] = (prev[j] or curr[j-1]);
                }

                // not match
                else {
                    curr[j] = false;
                }

            }
            prev = curr;
        }

        return curr[m];
    }
};

int main() {

    

    return 0;
}