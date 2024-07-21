/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size(), m = colSum.size();
        vector<vector<int>> arr(n, vector<int>(m, 0));
        for (int i=0, j=0; i<n and j<m; i+=(rowSum[i]==0), j+=(colSum[j]==0)) {
            int x=min(rowSum[i], colSum[j]);
            arr[i][j]=x;
            rowSum[i]-=x;
            colSum[j]-=x;
        }
        return arr;
    }
};

int main() {

    

    return 0;
}