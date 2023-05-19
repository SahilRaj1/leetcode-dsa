/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int mx = arr[0], sum = 0;
        for (int i=0; i<n; i++) {
            sum+=arr[i];
            mx=max(mx, sum);
            if (sum<0) sum=0;
        }
        return mx;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}