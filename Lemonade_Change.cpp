/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0, tens = 0;
        for (int &it: bills) {
            if (it == 5) {
                fives++;
            } else if (it == 10) {
                if (fives) {
                    fives--;
                    tens++;
                } else {
                    return false;
                }
            } else {
                if (tens and fives) {
                    fives--;
                    tens--;
                } else if (fives >= 3) {
                    fives -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {

    

    return 0;
}