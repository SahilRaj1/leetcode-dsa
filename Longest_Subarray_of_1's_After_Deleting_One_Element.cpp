/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ones;
        int ct=0;
        for (int i=0; i<n; i++) {
            if (nums[i] == 1) {
                ct++;
            } else {
                ones.push_back(ct);
                ct = 0;
            }
        }
        if (ct > 0) {
            ones.push_back(ct);
        }

        for (auto &it: ones) {
            cout<<it<<" ";
        }

        if (ones.size() == 1) {
            return ones[0]-1;
        }

        int ans = 0;
        for (int i=1; i<ones.size(); i++) {
            ans = max(ans, ones[i] + ones[i-1]);
        }

        return ans;

    }
};

int main() {

    

    return 0;
}