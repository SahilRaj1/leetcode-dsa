/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        int top = rStart - 1, bottom = rStart + 1, right = cStart + 1, left = cStart - 1;
        int i = rStart, j = cStart;
        while (ans.size() < (rows * cols)) {
            while (j < right) {
                if (j >= 0 && j < cols && i >= 0 && i < rows) {
                    ans.push_back({i, j});
                }
                j++;
            }
            right++;
            while (i < bottom) {
                if (j >= 0 && j < cols && i >= 0 && i < rows) {
                    ans.push_back({i, j});
                }
                i++;
            }
            bottom++;
            while (j > left) {
                if (j >= 0 && j < cols && i >= 0 && i < rows) {
                    ans.push_back({i, j});
                }
                j--;
            }
            left--;
            while (i > top) {
                if (j >= 0 && j < cols && i >= 0 && i < rows) {
                    ans.push_back({i, j});
                }
                i--;
            }
            top--;
        }
        return ans;
    }
};

int main() {

    

    return 0;
}