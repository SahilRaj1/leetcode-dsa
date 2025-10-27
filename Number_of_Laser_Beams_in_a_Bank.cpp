/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, last = 0, curr = 0;
        for (auto &row: bank) {
            for (auto &c: row) {
                curr += (int)(c == '1');
            }
            if (curr > 0) {
                if (last > 0) {
                    ans += (curr * last);
                }
                last = curr;
                curr = 0;
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}