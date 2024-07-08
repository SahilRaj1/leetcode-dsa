/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b) {
        return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        int ans = 0, i = 0;
        while (truckSize and i < n) {
            if (boxTypes[i][0] <= truckSize) {
                ans += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
                i++;
            } else {
                ans += truckSize * boxTypes[i][1];
                break;
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}