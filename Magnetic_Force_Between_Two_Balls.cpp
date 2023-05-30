/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool check(vector<int>& arr, int n, int m, int mid) {
        int balls = 1, last = arr[0];
        for (int i=1; i<n; i++) {
            if (arr[i] - last >= mid) {
                balls++;
                last = arr[i];
                if (balls == m) {
                    return true;
                }
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int lo=0, hi=*max_element(position.begin(), position.end()), mid;
        while (hi-lo>1) {
            mid = lo+(hi-lo)/2;
            if (check(position, n, m, mid)) {
                lo = mid;
            } else {
                hi = mid-1;
            }
        }
        if (check(position, n, m, hi)) {
            return hi;
        }
        return lo;
    }
};

int main() {

    

    return 0;
}