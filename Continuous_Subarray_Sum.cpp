/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(), prefixSum = 0;
        if (n < 2) {
            return false;
        }
        unordered_map<int, int> hsh;
        hsh[0] = -1;
        for (int i=0; i<n; i++) {
            prefixSum += nums[i];
            int remainder = prefixSum % k;
            if (hsh.find(remainder) != hsh.end()) {
                if (i - hsh[remainder] >= 2) {
                    return true;
                }
            } else {
                hsh[remainder] = i;
            }
        }
        if (prefixSum % k == 0) {
            return true;
        }
        return false;
    }
};

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(), prefixSum = 0;
        if (n < 2) {
            return false;
        }
        unordered_map<int, int> hsh;
        hsh[0] = -1;
        for (int i=0; i<n; i++) {
            prefixSum += nums[i];
            int remainder = prefixSum % k;
            if (hsh.find(remainder) != hsh.end()) {
                if (i - hsh[remainder] >= 2) {
                    return true;
                }
            } else {
                hsh[remainder] = i;
            }
        }
        if (prefixSum % k == 0) {
            return true;
        }
        return false;
    }
};

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(), prefixSum = 0;
        if (n < 2) {
            return false;
        }
        unordered_map<int, int> hsh;
        hsh[0] = -1;
        for (int i=0; i<n; i++) {
            prefixSum += nums[i];
            int remainder = prefixSum % k;
            if (hsh.find(remainder) != hsh.end()) {
                if (i - hsh[remainder] >= 2) {
                    return true;
                }
            } else {
                hsh[remainder] = i;
            }
        }
        if (prefixSum % k == 0) {
            return true;
        }
        return false;
    }
};



int main() {

    

    return 0;
}