/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

const int M = 1e9+7;

int numberOfWays(int n, int k) {

    int prev2 = k;
    int prev1 = (k + (k * (k-1)) % M) % M;

    if (n == 1) {
        return prev2;
    }

    if (n == 2) {
        return prev1;
    }

    int ans;
    for (int i=3; i<=n; i++) {
        ans = ((prev1 * 1LL * (k-1)) % M + 0LL + (prev2 * 1LL * (k-1)) % M) % M;
        prev2 = prev1;
        prev1 = ans;
    }

    return ans;

}

int main() {

    

    return 0;
}