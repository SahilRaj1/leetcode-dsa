/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for (int i=0; i<n; i++) {
            for (int j=0; j<i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (auto &row: matrix) {
            reverse(row.begin(), row.end());
        }
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}