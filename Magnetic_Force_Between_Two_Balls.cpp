/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool check(vector<int>& position, int m, int mid) {
        int ballsUsed = 1, lastBall = position[0], n = position.size();
        for (int i=1; i<n; i++) {
            if (position[i] - lastBall >= mid) {
                ballsUsed++;
                lastBall = position[i];
            }
        }
        return ballsUsed >= m;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int lo=0, hi=*max_element(position.begin(), position.end()), mid, ans = 0;
        // T T T T F F F F F F F F
        while(lo <= hi) {
            mid = lo + (hi-lo)/2;
            if (check(position, m, mid)) {
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