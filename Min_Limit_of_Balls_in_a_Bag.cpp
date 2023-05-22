/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool check(int mid, vector<int>& nums, int mxop) {
        int ct = 0;
        for (int &it: nums) {
            ct += (it-1)/mid;
            if (ct>mxop) {
                return false;
            } 
        }
        return true;
    }

    int minimumSize(vector<int>& nums, int maxOperations) {
        int n = nums.size();
        int lo=1, hi=*max_element(begin(nums), end(nums)), mid;
        int ans;
        while (hi-lo>1) {
            mid = lo+(hi-lo)/2;
            if (check(mid, nums, maxOperations)) {
                ans = mid;
                hi = mid;
            } else {
                lo = mid;
            }
        }
        if (check(lo, nums, maxOperations)) {
            ans = lo;
        } else {
            ans = hi;
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