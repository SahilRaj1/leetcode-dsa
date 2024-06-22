/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }

    int atMost(vector<int>& nums, int k) {
        int s = 0, ans = 0, i = 0;
        for(int j = 0; j < nums.size(); j++) {
            s += nums[j] % 2;
            while(s > k) {
                s -= (nums[i] % 2);
                i++;
            };
            ans += (j - i + 1);
        }
        return ans;
    }
};

int main() {

    

    return 0;
}