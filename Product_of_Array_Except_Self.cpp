/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        int mul = 1, zeroInd = -1;
        bool isZero = false, allZero = false;
        for (int i=0; i<n; i++) {
            if (isZero and nums[i]==0) {
                allZero = true;
                break;
            }
            if (nums[i]==0) {
                isZero = true;
                zeroInd = i;
            } else {
                mul *= nums[i];
            }
        }

        vector<int> ans(n, 0);
        if (!allZero) {
            for (int i=0; i<n; i++) {
                if (isZero) {
                    if (i==zeroInd) {
                        ans[i] = mul;
                    }
                } else {
                    ans[i] = mul/nums[i];
                }
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