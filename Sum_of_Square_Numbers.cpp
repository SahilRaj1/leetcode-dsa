/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0, j=sqrt(c);
        while(i <= j) {
            if (i*i + 0LL + j*j > c) {
                j--;
            } else if (i*i + 0LL + j*j < c) {
                i++;
            } else {
                return true;
            }
        }
        return false;
    }
};

int main() {

    

    return 0;
}