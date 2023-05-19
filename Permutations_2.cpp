/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> ans;

    void solve(unordered_map<int, int>& freq, int n, vector<int>& temp) {
        if (temp.size()==n) {
            ans.push_back(temp);
            return;
        }

        for (auto& [num, cnt]: freq) {
            if (cnt>0) {
                temp.push_back(num);
                cnt--;
                solve(freq, n, temp);
                cnt++;
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> temp;
        vector<bool> chosen(nums.size(), false);
        unordered_map<int, int> freq;
        for (int &it: nums) {
            freq[it]++;
        }
        solve(freq, nums.size(), temp);
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