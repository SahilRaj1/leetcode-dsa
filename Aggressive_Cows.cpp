/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    static bool check(vector<int> &stalls, int n, int cows, int mid) {
        int placedCows = 1, lastStall = stalls[0];
        for (int i=1; i<n; i++) {
            if (stalls[i]-lastStall >= mid) {
                placedCows++;
                lastStall = stalls[i];
            }
        }
        return placedCows >= cows;
    }

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(), stalls.end());
        int mx = *max_element(stalls.begin(), stalls.end()), mn = *min_element(stalls.begin(), stalls.end());
        int lo = 1, hi = mx-mn, mid, ans;
        // T T T T T F F F F F F F F F F
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            if (check(stalls, n, k, mid)) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}