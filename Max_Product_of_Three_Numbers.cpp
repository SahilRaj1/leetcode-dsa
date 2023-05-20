/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums), end(nums));
        int ans1 = nums[n-1]*nums[n-2]*nums[n-3];
        int ans2 = nums[n-1]*nums[0]*nums[1];
        return max(ans1, ans2);
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}