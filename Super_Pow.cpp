/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int binExp(int a, int b, int M) {
        int ans = 1;
        while(b) {
            if (b&1) {
                ans = (ans * 1LL * a) % M;
            }
            a = (a * 1LL * a) % M;
            b = b >> 1;
        }
        return ans;
    }

public:
    int superPow(int a, vector<int>& b) {
        int etf = 1140; // etf(1337) = 1140
        int n = b.size();
        int power = 0;
        for (int i=0; i<n; i++) {
            power = ((power * 10) + b[i]) % etf;
        }
        if (power == 0) {
            power = 1140;
        }
        return binExp(a, power, 1337);
    }
};

int main() {

    

    return 0;
}