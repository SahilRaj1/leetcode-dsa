/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,int> hsh;
        int i=0, j=0, ans=0;
        while (j<n) {
            hsh[s[j]]++;

            if (hsh[s[j]] > 1) {
                while (hsh[s[j]]>1) {
                    hsh[s[i]]--;
                    i++;
                }
            }

            if (hsh[s[j]] == 1) {
                ans = max(ans, j-i+1);
            }

            j++;
        }
        return ans;
    }
};

int main() {

    

    return 0;
}