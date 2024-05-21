/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    unordered_map<int, int> hsh;
    hsh[0] = 1;
    int xr = 0, ans = 0;
    for (int &it: A) {
        xr ^= it;
        ans += hsh[xr^B];
        hsh[xr]++;
    }
    return ans;
}


int main() {

    

    return 0;
}