/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hsh;
        int ct = 0;
        for (char &it: s) {
            hsh[it]++;
            if (hsh[it] == 1) {
                ct++;
            }
        }
        for (char &it: t) {
            hsh[it]--;
            if (hsh[it] == 0) {
                ct--;
            }
        }
        return s.length() == t.length() and ct == 0;
    }
};

int main() {

    

    return 0;
}