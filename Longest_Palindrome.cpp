/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> hsh;
        int ans = 0;
        for (char &it: s) {
            hsh[it]++;
        }
        bool odd = false;
        for (auto &it: hsh) {
            if (it.second%2 == 0) {
                ans += it.second;
            } else {
                odd = true;
                ans += it.second-1;
            }
        }
        return ans + odd;
    }
};

int main() {

    

    return 0;
}