/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.length();
        unordered_map<char, int> hsh;

        int i = 0, mx = 0, ans = 0;
        for (int j=0; j<n; j++) {
            hsh[s[j]]++;
            mx = max(mx, hsh[s[j]]);
            int len = j - i + 1;
            if (len - mx <= k) {
                ans = max(ans, len);
            } else {
                hsh[s[i]]--;
                if (hsh[s[i]] == 0) {
                    hsh.erase(s[i]);
                }
                i++;
            }
        }

        return ans;
        
    }
};

int main() {

    

    return 0;
}