/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {
        int chunks = time / (n - 1);
        if (chunks % 2) {
            return n - time % (n - 1);
        }
        return time % (n - 1) + 1;
    }
};

int main() {

    

    return 0;
}