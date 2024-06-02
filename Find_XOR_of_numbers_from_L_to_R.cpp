/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int xorFromOne(int n) {
        if (n%4 == 1) return 1;
        else if (n%4 == 2) return n+1;
        else if (n%4 == 3) return 0;
        else return n;
    }

public:
    int findXOR(int l, int r) {
        return xorFromOne(r) ^ xorFromOne(l-1);
    }
};

int main() {

    

    return 0;
}