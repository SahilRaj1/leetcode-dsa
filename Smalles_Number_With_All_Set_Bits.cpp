/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        vector<int> nums;
        for (int i=1; i<1024; i++) {
            if ((i & (i+1)) == 0) {
                nums.push_back(i);
            }
        }
        return *lower_bound(nums.begin(), nums.end(), n);
    }
};

int main() {

    

    return 0;
}