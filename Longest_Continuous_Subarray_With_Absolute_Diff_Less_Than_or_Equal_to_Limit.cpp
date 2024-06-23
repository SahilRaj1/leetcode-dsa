/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> increase, decrease;
        int mx = 0, i = 0;
        for (int j = 0; j < nums.size(); j++) {
            while (!increase.empty() && nums[j] < increase.back()) {
                increase.pop_back();
            }
            increase.push_back(nums[j]);

            while (!decrease.empty() && nums[j] > decrease.back()) {
                decrease.pop_back();
            }
            decrease.push_back(nums[j]);

            while (decrease.front() - increase.front() > limit) {
                if (nums[i] == decrease.front()) {
                    decrease.pop_front();
                }
                if (nums[i] == increase.front()) {
                    increase.pop_front();
                }
                i++;
            }
            mx = max(mx, j - i + 1);
        }
        return mx;
    }
};

int main() {

    

    return 0;
}