/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> hsh(n);
        for (auto &road : roads) {
            hsh[road[0]]++;
            hsh[road[1]]++;
        }
        vector<int> cities(n);
        for (int i = 0; i < n; i++) {
            cities[i] = i;
        }
        sort(cities.begin(), cities.end(), [&](int a, int b) {
            return hsh[a] > hsh[b];
        });
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (long long)(n - i) * hsh[cities[i]];
        }
        return ans;
    }
};

int main() {

    

    return 0;
}