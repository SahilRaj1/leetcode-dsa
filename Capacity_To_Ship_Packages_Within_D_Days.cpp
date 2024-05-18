/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    static bool check(vector<int>& weights, int days, int mid) {
        int daysTaken = 0, totalWeight = 0;
        for (int i=0; i<weights.size(); i++) {
            totalWeight += weights[i];
            if (totalWeight > mid) {
                daysTaken++;
                totalWeight = weights[i];
            }
        }
        daysTaken++;
        return daysTaken <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(), weights.end()), hi = accumulate(weights.begin(), weights.end(), 0), mid, ans;
        // F F F F T T T T T T T T
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            if (check(weights, days, mid)) {
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