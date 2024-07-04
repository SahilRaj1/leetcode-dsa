/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        int mn = 0, mx = 0;
        for (char &c: s) {
            if (c == '(') {
                mn++;
                mx++;
            } else if (c == ')') {
                mn--;
                mx--;
                if (mx < 0) {
                    return false;
                }
            } else {
                mn--;
                mx++;
            }
            if (mn < 0) {
                mn = 0;
            }
        }
        cout<<mn<<" "<<mx<<endl;
        return (mn == 0) or (mx == 0);
    }
};

int main() {

    

    return 0;
}