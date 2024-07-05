/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size(), i = 1, ans = 1;
        while(i < n) {
            if (ratings[i] == ratings[i-1]) {
                ans++;
                i++;
                continue;
            }
            int peak = 1;
            while (i < n and ratings[i] > ratings[i-1]) {
                peak++;
                ans += peak;
                i++;
            }
            int down = 1;
            while (i < n and ratings[i] < ratings[i-1]) {
                ans += down;
                i++;
                down++;
            }
            if (down > peak) {
                ans += down - peak;
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}