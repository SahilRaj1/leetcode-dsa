/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long ans=0;
        while(x) {
            int temp=x%10;
            ans=ans*10+temp;
            x/=10;
        }
        
        if(ans<INT_MIN or ans>INT_MAX) return 0;
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