/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int rows) {
        vector<vector<int>> pascalTriangle;
        for (int row=1; row<=rows; row++) {
            vector<int> currRow = {1};
            long long ans = 1;
            for (int col=1; col<row; col++) {
                ans *= (row-col);
                ans /= col;
                currRow.push_back(ans);
            }
            pascalTriangle.push_back(currRow);
        }
        return pascalTriangle;
    }
};

int main() {

    

    return 0;
}