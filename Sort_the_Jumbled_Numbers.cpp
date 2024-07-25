/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int convert(int n, vector<int> &mapping) {
        if (n == 0) {
            return mapping[0];
        }
        int convertedNumber = 0, pow = 1;
        while (n) {
            int digit = n % 10;
            convertedNumber = mapping[digit] * pow + convertedNumber;
            pow *= 10;
            n /= 10;
        }
        return convertedNumber;
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            int ca = convert(a, mapping), cb = convert(b, mapping);
            if (ca != cb) {
                return ca < cb;
            }
            return false;
        });
        return nums;
    }
};

int main() {

    

    return 0;
}