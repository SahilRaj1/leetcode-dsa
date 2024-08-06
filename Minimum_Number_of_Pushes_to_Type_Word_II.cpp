/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> hsh(26, 0);
        for (char c: word) {
            hsh[c-'a']++;
        }
        int n = 8, mul = 1, ans = 0;
        sort(hsh.begin(), hsh.end(), greater<int>());
        for (int it: hsh) {
            if (it == 0) {
                break;
            }
            ans += (it * mul);
            n--;
            if (n == 0) {
                mul++;
                n = 8;
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}