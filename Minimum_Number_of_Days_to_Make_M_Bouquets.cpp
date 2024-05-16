/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    static bool check(vector<int>& bloomDay, int m, int k, int mid) {
        int bouquets = 0, flowers = 0;
        for (int i=0; i<bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                flowers++;
            } else {
                flowers = 0;
            }
            if (flowers == k) {
                bouquets++;
                flowers = 0;
            }
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if (bloomDay.size()/k < m) {
            return -1;
        }
        int lo = 0, hi = *max_element(bloomDay.begin(), bloomDay.end()), mid, ans = -1;
        // F F F F T T T T T T
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            if (check(bloomDay, m, k, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}