/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.length(), m = t.length(), i = 0, j = 0;
        while (i<n and j<m) {
            if (s[i] == t[j]) {
                j++;
            }
            i++;
        }
        return m-j;
    }
};

int main() {

    

    return 0;
}