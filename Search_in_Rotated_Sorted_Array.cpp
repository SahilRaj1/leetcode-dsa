/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0, hi=nums.size()-1, mid;

        while(hi-lo>1) {
            mid = lo+(hi-lo)/2;
            if (nums[mid]==target) return mid;

            // check whether left half is sorted
            if (nums[lo]<=nums[mid]) {
                if (target>=nums[lo] and target<=nums[mid]) {
                    hi=mid-1;
                } else {
                    lo=mid+1;
                }
            }
            // check whether left half is sorted
            else {
                if (target>=nums[mid] and target<=nums[hi]) {
                    lo=mid+1;
                } else {
                    hi=mid-1;
                }
            }
        }

        if (nums[hi]==target) return hi;
        else if (nums[lo]==target) return lo;
        else return -1;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}