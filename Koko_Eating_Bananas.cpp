/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    static bool check(vector<int>& piles, int h, int mid) {
        long long hoursTaken = 0;
        for (auto &it: piles) {
            if (it%mid == 0) {
                hoursTaken += it/mid;
            } else {
                hoursTaken += (it/mid + 1);
            }

            if (hoursTaken > h) {
                return false;
            }
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1, hi = *max_element(piles.begin(), piles.end()), mid, ans;
        // F F F T T T T T T
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            if (check(piles, h, mid)) {
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