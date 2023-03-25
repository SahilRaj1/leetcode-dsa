/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
            return a[0] < b[0];
        });
        vector<int> temp = intervals[0];
        int n = intervals.size();
        for (int i=1; i<n; i++) {
            if (intervals[i][0]>temp[1]) {
                ans.push_back(temp);
                temp = intervals[i];
            } else {
                temp[1] = max(temp[1], intervals[i][1]);
            }
        }
        ans.push_back(temp);
        return ans;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}