/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return 0;
        }

        if (n == 2) {
            return nums[0] > nums[1] ? 0 : 1;
        }

        if (nums[0] > nums[1]) {
            return 0;
        }

        if (nums[n-1] > nums[n-2]) {
            return n-1;
        }

        int lo = 1, hi = n-2, mid;
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            if ((nums[mid] > nums[mid-1]) and (nums[mid] > nums[mid + 1])) {
                return mid;
            }

            if ((nums[mid] > nums[mid-1]) and (nums[mid] < nums[mid+1])) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return -1;
    }
};

int main() {

    

    return 0;
}