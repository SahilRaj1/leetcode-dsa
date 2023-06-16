/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, int parent, int timer, vector<int> &disc, vector<int> &low,
    vector<bool> &visited, vector<vector<int>> &ans, unordered_map<int, list<int>> &adj) {

    visited[node] = true;
    disc[node] = low[node] = timer++;

    for (auto &it: adj[node]) {

        // back to parent node condition
        if (it == parent) {
            continue;
        }

        if (!visited[it]) {
            dfs(it, node, timer, disc, low, visited, ans, adj);
            low[node] = min(low[node], low[it]);

            // check if edge is bridge
            if (low[it] > disc[node]) {
                ans.push_back({node, it});
            }
        } else {
            // back edge
            low[node] = min(low[node], disc[it]);
        }
    }

}

vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    
    unordered_map<int, list<int>> adj;
    for (auto &it: edges) {
        int u = it[0];
        int v = it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // initialize data structures
    int timer = 0;
    vector<int> disc(v, -1);
    vector<int> low(v, -1);
    int parent = -1;
    vector<bool> visited(v, false);
    vector<vector<int>> ans;

    // dfs
    for (int i=0; i<v; i++) {
        if (!visited[i]) {
            dfs(i, parent, timer, disc, low, visited, ans, adj);
        }
    }

    return ans;

}

int main() {

    

    return 0;
}