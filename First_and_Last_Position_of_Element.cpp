/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0, hi=n-1, mid;

        // yaar mujhe yaha initialize karna chahiye tha
        vector<int> ans = {-1, -1};

        if (n==1 and nums[0]==target) {
            ans[0]=0;
            ans[1]=0;
        }    

        while(hi-lo>=0) {
            mid = lo+(hi-lo)/2;
            if (nums[mid]==target) {
                ans[0] = mid;
                hi=mid-1;
            } else if (nums[mid]>target) {
                hi=mid-1;
            } else {
                lo=lo+1;
            }
        }

        lo=0, hi=n-1;
        while(hi-lo>=0) {
            mid = lo+(hi-lo)/2;
            if (nums[mid]==target) {
                ans[1] = mid;
                lo=mid+1;
            } else if (nums[mid]>target) {
                hi=mid-1;
            } else {
                lo=lo+1;
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