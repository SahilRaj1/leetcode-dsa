/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        for (int i=1; i<n; i++) {
            if (nums[i] == nums[i-1]) {
                return nums[i];
            }
        }
        
        return 0;

    }
};

int main() {

    

    return 0;
}