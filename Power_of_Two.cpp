/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<=0) return false;
        return ((n&(n-1))==0);
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}