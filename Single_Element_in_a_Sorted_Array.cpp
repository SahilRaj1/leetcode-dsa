/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }

        if (nums[0] != nums[1]) {
            return nums[0];
        }

        if (nums[n-1] != nums[n-2]) {
            return nums[n-1];
        }

        int lo = 1, hi = n-2, mid;
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            if (nums[mid] != nums[mid-1] and nums[mid] != nums[mid+1]) {
                return nums[mid];
            }
            // single element is at right of mid
            if ((mid%2 == 1 and nums[mid] == nums[mid-1])
                or (mid%2 == 0 and nums[mid] == nums[mid+1])) {
                    lo = mid + 1;
            }
            // single element is at left of mid
            else {
                hi = mid - 1;
            }
        }

        return -1;
    }
};

int main() {

    

    return 0;
}