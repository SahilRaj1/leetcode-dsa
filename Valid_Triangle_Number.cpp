/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        int n = nums.size();
        if (n < 3) {
            return 0;
        }

        sort(nums.begin(), nums.end());
        int i=0, ans=0;
        for (int i=n-1; i>=2; i--) {
            int lo = 0, hi = i-1;
            while (hi-lo>0) {
                if (nums[lo] + nums[hi] > nums[i]) {
                    ans += (hi-lo);
                    hi--;
                } else {
                    lo++;
                }
            }
        }

        return ans;

    }
};

int main() {

    

    return 0;
}