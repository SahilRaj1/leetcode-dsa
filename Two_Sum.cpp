/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i=0; i<n; i++) {
            if (mp.find(target-nums[i]) == mp.end()) {
                mp[nums[i]] = i;
            } else {
                return {mp[target-nums[i]], i};
            }
        }

        return {-1, -1};
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}