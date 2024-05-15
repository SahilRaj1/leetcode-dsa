/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int findKRotation(int arr[], int n) {
        int lo = 0, hi = n-1, mid, mn = INT_MAX, ans;
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            
            // search space is sorted
            if (arr[lo] <= arr[hi]) {
                if (arr[lo] < mn) {
                    mn = arr[lo];
                    ans = lo;
                }
            }
            
            if (arr[lo] <= arr[mid]) {
                if (arr[lo] < mn) {
                    mn = arr[lo];
                    ans = lo;
                }
                lo = mid + 1;
            } else {
                if (arr[mid] < mn) {
                    mn = arr[mid];
                    ans = mid;
                }
                hi = mid - 1;
            }
        }
        return ans;
	}

};

int main() {

    

    return 0;
}