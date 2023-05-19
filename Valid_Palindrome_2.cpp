/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int i=0, j=n-1;
        bool check1=true, check2=true, check3=true;
        while (i<j) {
            if (check1 and s[i]!=s[j]) {
                check1 = false;
                j--;
                break;
            }
            i++;
            j--;
        }
        int x=i+1, y=j+1;
        while (i<j) {
            if (s[i]!=s[j]) {
                check2 = false;
                break;
            }
            i++;
            j--;
        }
        while (x<y) {
            if (s[x]!=s[y]) {
                check3 = false;
                break;
            }
            x++;
            y--;
        }

        return (check1 or check2 or check3);
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}