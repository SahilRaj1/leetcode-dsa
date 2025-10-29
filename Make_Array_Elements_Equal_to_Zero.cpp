/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        vector<pair<int, int>> sumArr(101);
        int sumL = 0, sumR = 0, ans = 0;
        // calculating sum of numbers on the left of zeros
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == 0) {
                sumArr[i].first = sumL;
            } else {
                sumL += nums[i];
            }
        }
        // calculating sum of numbers on the right of zeros
        for (int i=nums.size()-1; i>=0; i--) {
            if (nums[i] == 0) {
                sumArr[i].second = sumR;
            } else {
                sumR += nums[i];
            }
        }
        // edge case
        if (sumL == 0 and sumR == 0) {
            return 2 * nums.size();
        }
        // calculating answer
        for (auto &it: sumArr) {
            if (it.first == 0 and it.second == 0) {
                continue;
            }
            if (it.first == it.second) {
                ans += 2;
            } else if (abs(it.first - it.second) == 1) {
                ans++;
            }
        }
        return ans;
    }
};Smallest Number With All Set Bits

int main() {

    

    return 0;
}