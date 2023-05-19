/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> powerSet;

    void solve(vector<int>& nums, int i, vector<int>& temp) {

        if (i==nums.size()) {
            powerSet.push_back(temp);
            return;
        }

        // take
        temp.push_back(nums[i]);
        solve(nums, i+1, temp);
        temp.pop_back();
        
        // not take
        while (i+1<nums.size() and nums[i]==nums[i+1]) {
            i++;
        }
        solve(nums, i+1, temp);

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        solve(nums, 0, temp);
        return powerSet;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}