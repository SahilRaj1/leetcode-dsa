/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b) {
        return a[1] < b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), cmp);
        int ans = 1, last = intervals[0][1];
        for (int i=1; i<n; i++) {
            if (intervals[i][0] >= last) {
                ans++;
                last = intervals[i][1];
            }
        }
        return n-ans;
    }
};

int main() {

    

    return 0;
}