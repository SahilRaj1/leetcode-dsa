/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        bool carry = false;
        int n = min(a.size(), b.size());
        int m = max(a.size(), b.size());
        if (a.size()<b.size()) {
            reverse(a.begin(), a.end());
            for (int i=0; i<m-n; i++) {
                a.push_back('0');
            }
            reverse(a.begin(), a.end());
        }
        if (b.size()<a.size()) {
            reverse(b.begin(), b.end());
            for (int i=0; i<m-n; i++) {
                b.push_back('0');
            }
            reverse(b.begin(), b.end());
        }
        string ans="";
        for (int i=m-1; i>=0; i--) {
            if (a[i]=='0' and b[i]=='0') {
                if (carry) {
                    ans.push_back('1');
                } else {
                    ans.push_back('0');
                }
                carry = false;
            } else if (a[i] != b[i]) {
                if (carry) {
                    ans.push_back('0');
                    carry = true;
                } else {
                    ans.push_back('1');
                }
            } else {
                if (carry) {
                    ans.push_back('1');
                } else {
                    ans.push_back('0');
                }
                carry = true;
            }
        }
        if (carry) {
            ans.push_back('1');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}