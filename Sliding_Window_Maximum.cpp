/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0, j=0, mx;
        vector<int> ans;
        deque<int> q;
        while (j<n) {

            while (!q.empty() and nums[j] > q.front()) {
                q.pop_front();
            }
            while (!q.empty() and nums[j] > q.back()) {
                q.pop_back();
            }
            q.push_back(nums[j]);

            if (j-i < k-1) {
                j++;
                continue;
            }

            mx = q.front();
            ans.push_back(mx);

            if (nums[i] == q.front()) {
                q.pop_front();
            }

            i++;
            j++;

        }

        return ans;
    }
};

int main() {

    

    return 0;
}