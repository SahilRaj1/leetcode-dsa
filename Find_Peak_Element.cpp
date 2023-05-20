/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return 0;
        int lo=0, hi=n-1, mid;
        while (hi-lo>1) {
            mid = lo+(hi-lo)/2;
            if (mid>0 and mid<n-1) {
                if (nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1]) {
                    return mid;
                } else if (nums[mid]>nums[mid-1]) {
                    lo=mid;
                } else {
                    hi=mid;
                }
            } else if (mid==0) {
                if (nums[mid]>nums[mid+1]) {
                    return mid;
                } else {
                    return mid+1;
                }
            } else {
                if (nums[mid]>nums[mid-1]) {
                    return mid;
                } else {
                    return mid-1;
                }
            }
        }
        if (nums[hi]>nums[lo]) return hi;
        else return lo;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}