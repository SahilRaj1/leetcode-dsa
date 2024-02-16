/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), i = 0, j = 0, ans = 1;
        long long total = 0;
        while (j < n) {
            int windowSize = j-i+1;
            total += nums[j];
            while (nums[j] * 1LL * windowSize > total + k) {
                total -= nums[i];
                i++;
                windowSize--;
            }
            if (nums[j] * 1LL * windowSize <= total + k) {
                ans = max(ans, windowSize);
                j++;
            }
        }

        return ans;
    }
};

int main() {

    

    return 0;
}