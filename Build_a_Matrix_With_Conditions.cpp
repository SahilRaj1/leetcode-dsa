/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kahn(int k,vector<vector<int>>& conditions) {
        vector<int> graph[k+1], deg(k+1);
        for(auto i: conditions){
            graph[i[0]].push_back(i[1]);
            deg[i[1]]++;
        }
        queue<int> q;
        for (int i=1; i<k; i++) {
            if(deg[i]==0){
                q.push(i);
            }
        }
        vector<int> ans;
        while (!q.empty()) {
            int t = q.front();
            q.pop();
            ans.push_back(t);
            for (auto it: graph[t]) {
                deg[it]--;
                if(deg[it]==0){
                    q.push(it);
                }
            }
        }
        return ans;
    }

    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<int> row = kahn(k+1,rowConditions);
        vector<int> col = kahn(k+1,colConditions);
        if (row.size()<k || col.size() < k) {
            return {};
        }
        unordered_map<int ,int> hsh;
        for(int i=0; i<k; i++){
           hsh[col[i]] = i;
        }
        vector<vector<int>> ans(k, vector<int>(k, 0));
        for (int i=0;i<k;i++) {
            int col_pos = hsh[row[i]];
            ans[i][col_pos] = row[i];
        }
        return ans;
    }
};

int main() {

    

    return 0;
}