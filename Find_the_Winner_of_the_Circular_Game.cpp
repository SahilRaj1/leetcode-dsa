/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        int i = 1, ans = 0;
        while (i <= n) {
            ans = (ans + k) % i;
            i++;
        }
        return ans + 1;
    }
};

int main() {

    

    return 0;
}