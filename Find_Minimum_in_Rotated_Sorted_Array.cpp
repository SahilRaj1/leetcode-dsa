/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0, hi=nums.size()-1, mid;
        if (nums[lo] < nums[hi]) {
            return nums[lo];
        }
        while(hi-lo>1) {
            mid = lo+(hi-lo)/2;
            if (nums[mid] >= nums[0]) {
                lo = mid+1; 
            } else {
                hi = mid;
            }
        }

        return min(nums[hi], nums[lo]);
    }
};

int main() {

    

    return 0;
}