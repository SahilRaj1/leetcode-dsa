/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> hsh;
        for (int &it: nums) {
            hsh[it]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (hsh[a] != hsh[b]) {
                return hsh[a] < hsh[b];
            }
            return b < a;
        });
        return nums;
    }
};

int main() {

    

    return 0;
}