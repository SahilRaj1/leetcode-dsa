/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        unordered_map<int, char> hsh;
        for (int i=0; i<26; i++) {
            hsh[i+1] = (char)(65+i);
        }
        string ans = "";
        while (columnNumber--) {
            int temp = columnNumber%26;
            ans.push_back(temp + 'A');
            columnNumber /= 26;
        }
        reverse(begin(ans), end(ans));
        return ans;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}