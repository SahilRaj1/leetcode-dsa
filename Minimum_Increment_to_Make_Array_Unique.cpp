/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mx = 0, ans = 0;
        for (int &it: nums) {
            mx = max(mx, it);
            ans += mx - it;
            mx++;
        }
        return ans;
    }
};


int main() {

    

    return 0;
}