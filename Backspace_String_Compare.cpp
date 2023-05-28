/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;

        for (auto &it: s) {
            if (it=='#') {
                if (!s1.empty()) {
                    s1.pop();
                }
            } else {
                s1.push(it);
            }
        }
        for (auto &it: t) {
            if (it=='#') {
                if (!s2.empty()) {
                    s2.pop();
                }
            } else {
                s2.push(it);
            }
        }
        while (!s1.empty() and !s2.empty()) {
            if (s1.top() != s2.top()) {
                return false;
            }
            s1.pop();
            s2.pop();
        }

        if (!s1.empty() or !s2.empty()) {
            return false;
        }

        return true;
    }
};

int main() {

    

    return 0;
}