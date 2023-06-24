/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        int n = s.length();
        string rev;
        for (int i=n-1; i>=0; i--) {
            rev.push_back(s[i]);
        }
        
        vector<int> curr(n+1, 0);
        vector<int> next(n+1, 0);

        for (int i=n-1; i>=0; i--) {
            for (int j=n-1; j>=0; j--) {

                if (s[i] == rev[j]) {
                    curr[j] = 1 + next[j+1];
                } else {
                    curr[j] = max(next[j], curr[j+1]);
                }

            }
            next = curr;
        }

        return curr[0];
        
    }
};

int main() {

    

    return 0;
}