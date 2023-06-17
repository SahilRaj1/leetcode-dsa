/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

const int M = 1e9+7;

long long int countDerangements(int n) {
    
    if (n == 1 or n == 2) {
        return n-1;
    }
    
    long long int prev2 = 0;
    long long int prev1 = 1;
    long long int ans;

    for (int i=3; i<=n; i++) {
        ans = ((i-1) * (prev1 + prev2) % M) % M;
        prev2 = prev1;
        prev1 = ans;
    }

    return ans;

}

int main() {

    

    return 0;
}