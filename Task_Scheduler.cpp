/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mp;
        int ct = 0;
        for (char &it: tasks) {
            mp[it]++;
            ct = max(ct, mp[it]);
        }
        int ans = (n+1)*(ct-1);
        for (auto &it: mp) {
            if (it.second == ct) {
                ans++;
            }
        }
        return max((int)tasks.size(), ans);
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}