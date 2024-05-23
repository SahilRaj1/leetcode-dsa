/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:

    int countSmallEqual(vector<vector<int>> &matrix, int n, int m, int mid) {
        int ct = 0;
        for (int i=0; i<n; i++) {
            ct += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
        }
        return ct;
    }

    int median(vector<vector<int>> &matrix, int n, int m){
        int lo = INT_MAX, hi = INT_MIN, mid;
        for (int i=0; i<n; i++) {
            lo = min(lo, matrix[i][0]);
            hi = max(hi, matrix[i][m-1]);
        }
        
        int req = (n*m) / 2;
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            int smallEqual = countSmallEqual(matrix, n, m, mid);
            if (smallEqual <= req) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        
        return lo;
    }
};

int main() {

    

    return 0;
}