/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size(), l = 0, r = 0, jumps = 0, i = 0;
        while (r < n-1) {
            int farthest = 0;
            for (int i=l; i<=r; i++) {
                if (i < n) {
                    farthest = max(farthest, i + nums[i]);
                }
            }
            l = r + 1;
            r = farthest;
            jumps++;
        }
        return jumps;
    }
};

int main() {

    

    return 0;
}