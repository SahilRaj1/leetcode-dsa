/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int rob(vector<int>& nums){

        int n = nums.size();
        int curr = nums[0], prev;
        
        for (int i=1; i<n; i++) {
            int take = nums[i];
            if (i > 1) {
                take += prev;
            }
            int ntake = 0 + curr;
            prev = curr;
            curr = max(take, ntake);
        }

        return curr;
        
    }

};

int main() {

    

    return 0;
}