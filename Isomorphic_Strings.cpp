/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        set<char> s1, s2;
        for (int i=0; i<s.length(); i++) {
            s1.insert(s[i]);
            s2.insert(t[i]);
        }

        if (s1.size()!=s2.size()) {
            return false;
        };

        unordered_map<char, char> hsh;
        int n = s.length();
        for (int i=0; i<n; i++) {
            if (hsh.find(s[i]) == hsh.end()) {
                hsh[s[i]] = t[i];
            } else {
                if (hsh[s[i]] != t[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};https://leetcode.com/problems/isomorphic-strings/

int main() {

    

    return 0;
}