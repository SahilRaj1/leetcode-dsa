/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;
        return __builtin_popcount(ans);
    }
};

int main() {

    

    return 0;
}