/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void reverse(vector<int>& nums, int start, int end) {
        if (start>=end) return;
        swap(nums[start], nums[end]);
        reverse(nums, start+1, end-1);
    }

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
    }
};

int main() {

    

    return 0;
}