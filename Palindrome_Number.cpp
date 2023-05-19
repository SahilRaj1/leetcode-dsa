/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        if (n<0) return false;

        long long temp=n, rev=0;
        while(n) {
            rev=rev*10+n%10;
            n/=10;
        }

        return temp==rev;
    
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}