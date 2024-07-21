/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        unordered_map<int, int> hsh;
        for (int i=0; i<n; i++) {
            int mn = INT_MAX;
            for (int j=0; j<m; j++) {
                mn = min(mn, matrix[i][j]);
            }
            hsh[mn]++;
        }
        for (int j=0; j<m; j++) {
            int mx = INT_MIN;
            for (int i=0; i<n; i++) {
                mx = max(mx, matrix[i][j]);
            }
            hsh[mx]--;
        }
        vector<int> ans;
        for (auto &it: hsh) {
            if (it.second == 0) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}