/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = accumulate(begin(nums), end(nums), 0);
        int temp = nums.size() * (int)(*min_element(begin(nums), end(nums)));
        return sum-temp;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}