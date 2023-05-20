/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool check(vector<int>& weights, int days, int ship) {
        int sum=0, daysTaken=0;
        for (auto &it: weights) {
            if (sum+it>ship) {
                sum = 0;
                daysTaken++;
            }
            sum+=it;
        }
        int n = weights.size();
        if (weights[n-1]==sum or sum<=ship) daysTaken++;
        return daysTaken<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight = 0;
        maxWeight = accumulate(weights.begin(), weights.end(), maxWeight);
        int lo=*max_element(weights.begin(), weights.end()), hi= maxWeight, mid;
        while (hi-lo>1) {
            mid = lo+(hi-lo)/2;
            if (check(weights, days, mid)) {
                hi = mid;
            } else {
                lo = mid+1;
            }
        }
        if (check(weights, days, lo)) {
            return lo;
        } else {
            return hi;
        }
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}