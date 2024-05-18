/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int lo = 0, hi = arr.size()-1, mid;
        while (lo <= hi) {
            mid = (lo+hi)/2;
            int missing = arr[mid] - (mid + 1);
            if (missing < k) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        if (hi == -1) {
            return k;
        }

        return hi + k + 1;
    }
};

int main() {

    

    return 0;
}