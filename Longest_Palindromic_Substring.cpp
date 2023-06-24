/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int palindromeLength(string &s, int l, int r) {
        while (l>=0 and r<=s.length()) {
            if (s[l]!=s[r]) break;
            l--;
            r++;
        }
        return r-l-1;
    }

    string longestPalindrome(string s) {
        int n=s.length(), ans=0, start=0;
        for (int i=0; i<n; i++) {
            int odd = palindromeLength(s, i, i);
            int even = 0;
            if (i<n-1) even = palindromeLength(s, i, i+1);
            int mx = max(odd, even);
            if (mx>ans) {
                ans=mx;
                start = i-(mx-1)/2;
            }
        }
        return s.substr(start, ans);
    }
};

int main() {

    

    return 0;
}