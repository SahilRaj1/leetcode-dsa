/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    static bool check(vector<int>& nums, int k, int mid) {
        int subArrays = 1, sum = nums[0];
        for (int i=1; i<nums.size(); i++) {
            if (sum + nums[i] <= mid) {
                sum += nums[i];
            } else {
                subArrays++;
                sum = nums[i];
            }
        }
        return subArrays <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int lo = *max_element(nums.begin(), nums.end()),
            hi = accumulate(nums.begin(), nums.end(), 0), mid, ans;
        // F F F F T T T T T T T
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            if (check(nums, k, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}