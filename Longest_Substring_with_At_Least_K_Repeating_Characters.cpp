/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubstring(string s, int k) {
        
        int n = s.length();

        unordered_map<char, int> hsh;
        for (auto &it: s) {
            hsh[it]++;
        }

        int i = 0;
        while (i < n and hsh[s[i]] >= k) {
            i++;
        }

        if (i == n) {
            return n;
        }

        int left = longestSubstring(s.substr(0, i), k);
        int right = longestSubstring(s.substr(i+1, n-i-1), k);

        return max(left, right);

    }
};

int main() {

    

    return 0;
}