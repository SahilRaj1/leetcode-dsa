/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxLen(vector<int>&A, int n) {   
        unordered_map<int, int> hsh;
        int sum = 0, ans = 0;
        for (int i=0; i<n; i++) {
            sum += A[i];
            if (sum == 0) {
                ans = i + 1;
            } else {
                if (hsh.find(sum) != hsh.end()) {
                    ans = max(ans, i-hsh[sum]);
                } else {
                    hsh[sum] = i;
                }   
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}