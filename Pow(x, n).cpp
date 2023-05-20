/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n==0) {
            return 1;
        }
        int temp = n;
        n = abs(temp);
        double ans = 1;
        while (n>0) {
            if (n%2) {
                ans = ans * x;
            }
            x = x * x;
            n /= 2;
        }
        if (temp<0) {
            return 1/ans;
        } else {
            return ans;
        }
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}