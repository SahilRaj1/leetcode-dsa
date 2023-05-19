/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

int min(int a, int b) {
    if (a<b) return a;
    else return b;
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mn = 200;
        for (auto word: strs) {
            mn = min(mn, word.length());
        }

        string ans = "";
        if (strs.size()==0) return ans;

        bool check = true;
        for (int i=0; i<mn; i++) {
            char c = strs[0][i];
            for (auto word: strs) {
                if (word[i]!=c) {
                    check = false;
                    break;
                }
            }
            if (check==false) {
                break;
            } else {
                ans.push_back(c);
            }
        }

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