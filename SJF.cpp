/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long solve(vector<int>& bt) {
        int ans = 0, n = bt.size(), wt = 0;
        sort(bt.begin(), bt.end());
        for (auto &it: bt) {
            ans += wt;
            wt += it;
        }
        return ans/n;
    }
};

int main() {

    

    return 0;
}