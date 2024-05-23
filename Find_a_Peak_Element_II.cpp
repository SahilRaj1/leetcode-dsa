/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int maxElement(vector<vector<int>>& mat, int n, int mid) {
        int ind = 0, mx = INT_MIN;
        for (int i=0; i<n; i++) {
            if (mat[i][mid] > mx) {
                mx = mat[i][mid];
                ind = i;
            }
        }
        return ind;
    }

public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        int lo = 0, hi = m-1, mid, row;
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            row = maxElement(mat, n, mid);
            int left = mid-1 >= 0 ? mat[row][mid-1] : -1;
            int right = mid+1 < m ? mat[row][mid+1] : -1;
            if (mat[row][mid] > left and mat[row][mid] > right) {
                return {row, mid};
            } else if (mat[row][mid] < left) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return {-1, -1};
    }
};

int main() {

    

    return 0;
}