/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {

        long long n = abs(dividend);
        long long m = abs(divisor);

        if (m > n) {
            return 0;
        }

        long long lo = 1, hi = n, mid;
        while (hi-lo > 1) {
            mid = lo + (hi-lo)/2;
            if (mid*m <= n) {
                lo = mid;
            }
            else {
                hi = mid - 1;
            }
        }

        int neg = 1;
        if (divisor < 0 ^ dividend < 0) {
            neg = -1;
        }

        long long ans;
        if (hi*m <= n) {
            ans = hi;
        } else {
            ans = lo;
        }

        if (neg == -1) {
            return neg * ans < INT_MIN ? INT_MIN : neg * ans;
        } else {
            return ans > INT_MAX ? INT_MAX : ans;
        }

    }
};

int main() {

    

    return 0;
}