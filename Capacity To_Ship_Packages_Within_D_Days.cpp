/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int check(vector<int>& arr, int n, int days, int mid) {
        int days_taken = 1, sum = 0;
        for (int i=0; i<n; i++) {
            if (sum + arr[i] <= mid) {
                sum += arr[i];
            } else {
                if (arr[i]>mid) {
                    return false;
                }
                days_taken++;
                sum = arr[i];
            }
        }
        return days_taken <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int lo=0, hi=accumulate(weights.begin(), weights.end(), 0), mid;
        while (hi-lo > 1) {
            // FFFFFFFFTTTTTTTTT
            mid = lo + (hi-lo)/2;
            if (check(weights, n, days, mid)) {
                hi = mid;
            } else {
                lo = mid+1;
            }
        }
        if (check(weights, n, days, lo)) {
            return lo;
        }
        return hi;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}