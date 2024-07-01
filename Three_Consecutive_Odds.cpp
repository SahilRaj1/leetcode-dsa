/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ct = 0;
        for(int &it: arr) {
            if (it % 2) {
                ct++;
                if (ct == 3) {
                    return true;
                }
            } else {
                ct = 0;
            }
        }
        return false;
    }
};

int main() {

    

    return 0;
}