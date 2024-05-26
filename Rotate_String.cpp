/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool isSubstring(string s1, string s2) {
        if (s1.find(s2) != string::npos)
            return true;
        return false;
    }

    bool rotateString(string s, string goal) {
        return (s.length() == goal.length() and isSubstring(s+s, goal));
    }
};

int main() {

    

    return 0;
}