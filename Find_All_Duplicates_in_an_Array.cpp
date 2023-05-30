/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<bool> hsh(1e5+10, false);
        vector<int> ans;
        for (int i=0; i<n; i++) {
            if (hsh[nums[i]]==false) {
                hsh[nums[i]] = true;
            } else {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}