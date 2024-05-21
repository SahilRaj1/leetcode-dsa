/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
    void swapIfGreater(long long nums1[], long long nums2[], int ind1, int ind2) {
        if (nums1[ind1] > nums2[ind2]) {
            swap(nums1[ind1], nums2[ind2]);
        }
    }
    
public:
    void merge(long long nums1[], long long nums2[], int n, int m) { 
        int len = n + m;
        int gap = (len/2) + (len%2);
        while (gap > 0) {
            int left = 0;
            int right = left + gap;
            while (right < len) {
                // nums1 and nums2
                if (left < n and right >= n) {
                    swapIfGreater(nums1, nums2, left, right-n);
                }
                // nums2 and nums2
                else if (left >= n) {
                    swapIfGreater(nums2, nums2, left-n, right-n);
                }
                // nums1 and nums1
                else {
                    swapIfGreater(nums1, nums1, left, right);
                }
                left++, right++;
            }
            if (gap == 1) {
                break;
            }
            gap = (gap/2) + (gap%2);
        }
    }
};

int main() {

    

    return 0;
}