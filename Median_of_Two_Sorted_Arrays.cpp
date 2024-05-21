/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        if (n1 > n2) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int n = n1 + n2, left = (n1 + n2 + 1)/2, lo = 0, hi = n1, mid1, mid2;
        while (lo <= hi) {
            mid1 = lo + (hi-lo)/2;
            mid2 = left - mid1;

            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;

            if (mid1 < n1) r1 = nums1[mid1];
            if (mid2 < n2) r2 = nums2[mid2];
            if (mid1 > 0) l1 = nums1[mid1-1];
            if (mid2 > 0) l2 = nums2[mid2-1];

            if (l1 <= r2 and l2 <= r1) {
                if (n%2) return max(l1, l2);
                else return (double) (max(l1, l2) + min(r1, r2)) / 2.0;
            } else if (l1 > r2) {
                hi = mid1 - 1;
            } else if (l2 > r1) {
                lo = mid1 + 1;
            }
        }
        
        return 0;
    }
};

int main() {

    

    return 0;
}