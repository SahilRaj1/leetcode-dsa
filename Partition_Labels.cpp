/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        int n = s.length();
        vector<pair<int, int>> arr;
        vector<bool> visited(26, false);
        for (int i=0; i<n; i++) {
            if (!visited[s[i]-'a']) {
                pair<int, int> temp;
                temp.first = i;
                for (int j=i; j<n; j++) {
                    if (s[j] == s[i]) {
                        temp.second = j;
                    }
                }
                visited[s[i]-'a'] = true;
                arr.push_back(temp);
            }
        }

        sort(arr.begin(), arr.end());

        vector<int> ans;
        int mn = 0, mx = 0;
        for (auto &it: arr) {
            if (it.first <= mx) {
                mx = max(mx, it.second);
            } else {
                ans.push_back(mx - mn + 1);
                mn = it.first;
                mx = it.second;
            }
        }
        ans.push_back(mx - mn + 1);

        return ans;

    }
};

int main() {

    

    return 0;
}