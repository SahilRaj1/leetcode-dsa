/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0, prefixSum = 0, remainder;
        unordered_map<int, int> hsh;
        hsh[0] = 1;
        for (int &it: nums) {
            prefixSum += it;
            remainder = prefixSum % k;
            if (remainder < 0) {
                remainder += k;
            }
            if (hsh[remainder]) {
                ans += hsh[remainder];
            }
            hsh[remainder]++;
        }
        return ans;
    }
};

int main() {

    

    return 0;
}