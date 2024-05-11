/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        auto lowerBoundIterator = lower_bound(nums.begin(), nums.end(), target);
        if ((lowerBoundIterator == nums.end()) or (*lowerBoundIterator != target)) {
            return ans;
        }
        auto upperBoundIterator = upper_bound(nums.begin(), nums.end(), target);
        ans[0] = lowerBoundIterator - nums.begin();
        ans[1] = upperBoundIterator - nums.begin() - 1;
        return ans;
    }
};

int main() {

    

    return 0;
}