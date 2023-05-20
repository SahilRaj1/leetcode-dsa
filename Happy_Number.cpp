/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solve(int n) {
        int ans = 0;
        while (n) {
            int temp = n%10;
            ans += temp*temp;
            n /= 10;
        }
        return ans;
    }

    unordered_map<int, bool> hsh;
    bool isHappy(int n) {
        while (1) {
            int temp = solve(n);
            if (temp==1) {
                break;
            }
            if (hsh[temp]) {
                return false;
            }
            hsh[temp] = true;
            n = temp;
        }
        return true;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}