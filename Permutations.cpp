/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> ans;

    void solve(vector<int>& nums, vector<bool>& chosen, vector<int>& temp) {
        if (temp.size()==nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i=0; i<nums.size(); i++) {
            if (!chosen[i]) {
                temp.push_back(nums[i]);
                chosen[i] = true;
                solve(nums, chosen, temp);
                chosen[i] = false;
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<bool> chosen(nums.size(), 0);
        solve(nums, chosen, temp);
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