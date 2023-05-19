/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1, ans=0;
        while (i<j) {
            if (height[i]>height[j]) {
                ans = max(ans, height[j]*(j-i));
                j--;
            } else {
                ans = max(ans, height[i]*(j-i));
                i++;
            }
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