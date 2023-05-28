/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        if (n == 0) {
            return 0;
        }
        unordered_map<int, int> hsh;
        int i=0, j=0, ans=0, ct=0;
        while (j<n) {
            hsh[fruits[j]]++;
            if (hsh[fruits[j]] == 1) {
                ct++;
            }

            if (ct > 2) {
                while (ct > 2) {
                    hsh[fruits[i]]--;
                    if (hsh[fruits[i]] == 0) {
                        ct--;
                    }
                    i++;
                }
            }

            if (ct == 2) {
                ans = max(ans, j-i+1);
            }

            j++;
        }

        if (hsh.size() == 1) {
            return hsh[fruits[0]];
        }

        return ans;
    }
};

int main() {

    

    return 0;
}