/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int M = 1e9+7;
    int binExp(long long a, long long b) {
        if (b==0) {
        return 1;
        }
        int res = binExp(a, b/2);
        if (b&1) {
            return ((res * 1LL * res) % M * a) % M;
        } else {
            return (res * 1LL * res) % M;
        }
        return -1;
    }

    int countGoodNumbers(long long n) {
        int ans = binExp(20, n/2);
        return (n & 1) ? (ans * 1LL * 5) % M : ans;
    }
};

int main() {

    

    return 0;
}