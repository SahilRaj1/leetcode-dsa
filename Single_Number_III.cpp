/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int getFirstSetBit(int n) {
        int i = 0;
        while (n) {
            if (n & 1) {
                return i;
            }
            n = n>>1;
            i++;
        }
        return -1;
    }

public:
    vector<int> singleNumber(vector<int>& nums) {
        int x = 0;
        for (int &it: nums) {
            x ^= it;
        }
        int firstSetBit = getFirstSetBit(x);
        int a = 0, b = 0;
        for (int &it: nums) {
            if (it & (1<<firstSetBit)) {
                a ^= it;
            } else {
                b ^= it;
            }
        }
        return {a, b};
    }
};

int main() {

    

    return 0;
}