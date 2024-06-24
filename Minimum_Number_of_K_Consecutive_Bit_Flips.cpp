/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        queue<int> q;
        int res = 0;
        for (int i=0; i<n; i++) {
            while (!q.empty() and i > q.front() + k - 1) {
                q.pop();
            }
            if ((nums[i] + q.size()) % 2 == 0) {
                if (i + k > n) {
                    return -1;
                }
                res++;
                q.push(i);
            }
        }
        return res;
    }
};

int main() {

    

    return 0;
}