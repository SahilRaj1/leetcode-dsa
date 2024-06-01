/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int bitIndex=0; bitIndex<32; bitIndex++) {
            int ct = 0;
            for (int &it: nums) {
                if (it & (1 << bitIndex)) {
                    ct++;
                }
            }
            if (ct%3 == 1) {
                ans = ans | (1 << bitIndex);
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}