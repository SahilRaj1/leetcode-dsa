/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> hsh;
        for(auto &edge: edges) {
           hsh[edge[0]]++;
           hsh[edge[1]]++;
        }
        int n = hsh.size();
        for(auto &it: hsh) {
            if (it.second == n-1) {
                return it.first;
            }
        }
        return -1;
    }
};

int main() {

    

    return 0;
}