/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(pair<string, int> &a, pair<string, int> &b) {
        return a.second > b.second;
    }

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<string, int>> temp(n);
        for (int i=0; i<n; i++) {
            temp[i] = {names[i], heights[i]};
        }
        sort(temp.begin(), temp.end(), cmp);
        for (int i=0; i<n; i++) {
            names[i] = temp[i].first;
        }
        return names;
    }
};

int main() {

    

    return 0;
}