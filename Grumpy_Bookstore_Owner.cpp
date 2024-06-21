/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size(), i = 0, j = 0, temp = 0, mx = 0, ans = 0;
        while (j < n) {
            if (j - i < minutes - 1) {
                if (grumpy[j]) {
                    temp += customers[j];
                } else {
                    ans += customers[j];
                }
                j++;
                continue;
            }

            if (grumpy[j]) {
                temp += customers[j];
            } else {
                ans += customers[j];
            }

            mx = max(mx, temp);

            if (grumpy[i]) {
                temp -= customers[i];
            }

            i++;
            j++;
        }
        return ans + mx;
    }
};

int main() {

    

    return 0;
}