/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> ans;

    void solve(int n) {
        if (n<0) {
            return;
        }
        solve(n-1);
        ans.push_back(__builtin_popcount(n));
        return;
    }
    
    vector<int> countBits(int n) {
        solve(n);
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