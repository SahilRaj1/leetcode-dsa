/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int n = s.length();
        unordered_map<char, int> hsh;
        int i=0, j=0, ans=-1, ct=0;
        while (j<n) {
            hsh[s[j]]++;
            if (hsh[s[j]] == 1) {
                ct++;
            }
            if (ct == k) {
                ans = max(ans, j-i+1);
            } else if (ct > k) {
                while (ct > k) {
                    hsh[s[i]]--;
                    if (hsh[s[i]] == 0) {
                        ct--;
                    }
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};

int main() {

    

    return 0;
}