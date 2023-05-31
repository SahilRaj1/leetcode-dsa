/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int ct=0;
        for (int i=0; i<n; i++) {
            if (nums[i]>nums[(i+1)%n]) ct++;
        }

        return ct<=1;
    }
};

int main() {

    

    return 0;
}