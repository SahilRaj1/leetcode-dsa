/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool comparator(pair<int, int> &a, pair<int, int> &b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    }

    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> work;
        int n = difficulty.size();
        for (int i=0; i<n; i++) {
            work.push_back({profit[i], difficulty[i]});
        }
        sort(work.begin(), work.end(), comparator);
        int maxProfit, ans = 0;
        for (int &it: worker) {
            maxProfit = 0;
            for (int i=0; i<n; i++) {
                if (it >= work[i].second) {
                    maxProfit = work[i].first;
                    break;
                }
            }
            cout<<maxProfit<<endl;
            ans += maxProfit;
        }
        return ans;
    }
};

int main() {

    

    return 0;
}