/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);

        if (sum & 1) {
            return false;
        }

        vector<int> curr(sum/2+1, 0);
        vector<int> next(sum/2+1, 0);

        curr[0] = 1;
        next[0] = 1;

        for (int i=n-1; i>=0; i--) {
            for (int target=0; target<=sum/2; target++) {

                bool ntake = next[target];
                bool take = 0;
                if (target >= nums[i]) {
                    take = next[target-nums[i]];
                }
                curr[target] = take + ntake;

            }
            next = curr;
        }

        if(curr[sum/2] >= 2) {
            return true;
        }

        return false;

    }
};

int main() {

    

    return 0;
}