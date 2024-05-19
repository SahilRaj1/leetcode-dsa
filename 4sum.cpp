/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i=0; i<n; i++) {
            if (i > 0 and nums[i]==nums[i-1]) continue;
            for (int j=i+1; j<n; j++) {
                if (j > i+1 and nums[j]==nums[j-1]) continue;
                int k = j+1, l = n-1;
                while (k < l) {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum < target) {
                        k++;
                    } else if (sum > target) {
                        l--;
                    } else {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while (k < l and nums[k] == nums[k-1]) k++;
                        while (k < l and nums[l] == nums[l+1]) l--;
                    }
                }
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}