/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int N = nums.size(), i = 0, ans = 0;
        long long sum = 0;
        while (sum < n) {
            if (i < N and nums[i] <= sum+1) {
                sum += nums[i];
                i++;
            } else {
                ans++;
                sum += (sum+1);
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}