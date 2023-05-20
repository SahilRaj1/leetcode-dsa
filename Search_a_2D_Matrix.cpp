/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int lo=0, hi=n*m-1, mid;
        while (hi-lo>1) {
            mid = lo+(hi-lo)/2;
            if (matrix[mid/m][mid%m]<target) {
                lo = mid;
            } else if (matrix[mid/m][mid%m]>target) {
                hi = mid;
            } else {
                return true;
            }
        }
        return ((matrix[hi/m][hi%m]==target)or(matrix[lo/m][lo%m]==target));
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}