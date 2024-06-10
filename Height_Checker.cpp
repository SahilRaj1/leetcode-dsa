/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size(), ans = 0;
        vector<int> sorted = heights;
        sort(sorted.begin(), sorted.end());
        for (int i=0; i<n; i++) {
            ans += (heights[i] != sorted[i]);
        }
        return ans;
    }
};

int main() {

    

    return 0;
}