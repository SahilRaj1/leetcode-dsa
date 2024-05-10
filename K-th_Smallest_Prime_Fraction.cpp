/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    static bool comparator(pair<int, int> a, pair<int, int> b) {
        return (float)a.first/a.second < (float)b.first/b.second;
    }

    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        vector<pair<int, int>> fractions;
        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                fractions.push_back({arr[i], arr[j]});
            }
        }
        sort(fractions.begin(), fractions.end(), comparator);
        return {fractions[k-1].first, fractions[k-1].second};
    }
};

int main() {

    

    return 0;
}