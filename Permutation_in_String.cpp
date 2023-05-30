/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s2.length(), k=s1.length();
        if (k > n) {
            return false;
        }
        unordered_map<char, int> hsh;
        for (char &it: s1) {
            hsh[it]++;
        }
        int i=0, j=0, ct=hsh.size();
        while (j<n) {
            hsh[s2[j]]--;
            if (hsh[s2[j]] == 0) {
                ct--;
            }
            if (j-i < k-1) {
                j++;
                continue;
            }
            if (ct == 0) {
                return true;
            }
            if (hsh.find(s2[i]) != hsh.end()) {
                hsh[s2[i]]++;
                if (hsh[s2[i]] == 1) {
                    ct++;
                }
            }
            i++;
            j++;
        }
        return false;
    }
};

int main() {

    

    return 0;
}