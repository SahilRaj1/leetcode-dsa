/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    static bool check(vector<int> &stations, int n, int k, double mid) {
        int ct = 0;
        for (int i=1; i<n; i++) {
            int numberInBetween = (stations[i]-stations[i-1]) / mid;
            if ((stations[i]-stations[i-1]) / mid == numberInBetween * mid) {
                numberInBetween--;
            }
            ct += numberInBetween;
        }
        return ct <= k;
    }
  
    double findSmallestMaxDist(vector<int> &stations, int k) {
        int n = stations.size();
        double lo = 0, hi = 0, mid, ans, diff = (double) 1e-6;
        for (int i=1; i<n; i++) {
            hi = max(hi, double(stations[i]-stations[i-1]));
        }
        // F F F F T T T T T T T T
        while (hi - lo > diff) {
            mid = lo + (hi-lo)/(2.0);
            if (check(stations, n, k, mid)) {
                ans = mid;
                hi = mid;
            } else {
                lo = mid;
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}