/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        unordered_map<int, list<pair<int, double>>> adj(n);
        for (int i=0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back({v, succProb[i]});
            adj[v].push_back({u, succProb[i]});
        }

        vector<double> ans(n, 0.0);
        ans[start] = 1.0;

        queue<int> q;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (auto &it: adj[node]) {
                int temp = it.first;
                double prob = it.second;
                double newProb = ans[node] * prob;
                if (newProb > ans[temp]) {
                    ans[temp] = newProb;
                    q.push(temp);
                }
            }
        }

        return ans[end];

    }
};

int main() {

    

    return 0;
}