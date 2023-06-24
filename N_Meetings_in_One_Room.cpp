/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b) {
        return a.second < b.second;
    }

    int maxMeetings(int start[], int end[], int n) {
        
        vector<pair<int, int>> arr;
        for (int i=0; i<n; i++) {
            arr.push_back({start[i], end[i]});
        }
        
        sort(arr.begin(), arr.end(), cmp);
        
        int mn = arr[0].first, mx = arr[0].second, ans = 1;
        for (int i=1; i<n; i++) {
            if (arr[i].first > mx) {
                ans++;
                mx = arr[i].second;
            }
        }
        
        return ans;
        
    }
};

int main() {

    

    return 0;
}