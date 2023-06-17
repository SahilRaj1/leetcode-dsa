/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int> curr(m+1, 0);
        vector<int> next(m+1, 0);

        int maxi = 0;
        for (int i=n-1; i>=0; i--) {
            for (int j=m-1; j>=0; j--) {

                int right = curr[j+1];
                int down = next[j];
                int diag = next[j+1];

                if (matrix[i][j] == '1') {
                    curr[j] = 1 + min(right, min(down, diag));
                    maxi = max(maxi, curr[j]);
                } else {
                    curr[j] = 0;
                }
            }
            
            next = curr;
        }

        return maxi * maxi;

    }
};

int main() {

    

    return 0;
}