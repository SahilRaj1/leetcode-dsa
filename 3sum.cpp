/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int lo, hi, sum;
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        for (int i=0; i<n-2; i++) {
            if (i==0 or (i>0 and nums[i]!=nums[i-1])) {
                lo = i+1, hi = n-1, sum = -1 * nums[i];

                while (lo<hi) {

                    if (nums[lo]+nums[hi] == sum) {
                        temp = {};
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        ans.push_back(temp);

                        while (lo<hi and nums[lo]==nums[lo+1]) {
                            lo++;
                        }
                        while (lo<hi and nums[hi]==nums[hi-1]) {
                            hi--;
                        }

                        lo++, hi--;

                    } else if (nums[lo]+nums[hi] < sum) {
                        lo ++;
                    } else {
                        hi--;
                    }
                }
            }
        }
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