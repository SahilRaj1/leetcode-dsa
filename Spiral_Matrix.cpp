/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n=matrix.size(), m=matrix[0].size();

        int left=0, right=m-1, top=0, bottom=n-1;
        int dir=0;   // directions: 0 -> right, 1 -> down, 2 -> left, 3-> up
        while ((left<=right) and (top<=bottom)) {
            
            if (dir==0) {
                for (int i=left; i<=right; i++) {
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }

            else if (dir==1) {
                for (int i=top; i<=bottom; i++) {
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }

            else if (dir==2) {
                for (int i=right; i>=left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            else if (dir==3) {
                for (int i=bottom; i>=top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }

            dir = (dir+1)%4;

        }

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