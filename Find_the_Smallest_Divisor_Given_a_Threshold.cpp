/* Sahil Raj */
// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    static bool check(vector<int>& nums, int threshold, int mid) {
        int sum = 0;
        for (auto &it: nums) {
            sum += it/mid;
            if (it%mid) sum++;
        }
        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1, hi = *max_element(nums.begin(), nums.end()), mid, ans;
        // F F F F F T T T T T T
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            cout<<mid<<endl;
            if (check(nums, threshold, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}