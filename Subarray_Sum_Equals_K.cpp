/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int sum=0, ans=0;
        unordered_map<int, int> m;
        m[sum]++;
        for (int i=0; i<n; i++) {
            sum += arr[i];
            ans += m[sum-k];
            m[sum]++;
        }

        return ans;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}