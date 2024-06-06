/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();

        if (n%k) {
            return false;
        }

        sort(nums.begin(), nums.end());
        unordered_map<int, int> hsh;
        for (int &it: nums) {
            hsh[it]++;
        }

        for (int &it: nums) {
            if (hsh[it] == 0) {
                continue;
            }

            for (int i=0; i<k; i++) {
                int temp = it + i;
                if (hsh[temp] == 0) {
                    return false;
                }
                hsh[temp]--;
            }
        }

        return true;
    }
};

int main() {

    

    return 0;
}