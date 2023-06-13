/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, list<int>> &adj, vector<bool> &visited, vector<int> &component) {

    component.push_back(node);
    visited[node] = true;

    for (auto &it: adj[node]) {
        if (!visited[it]) {
            dfs(it, adj, visited, component);
        }
    }

}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges) {
    
    unordered_map<int, list<int>> adj;
    for (auto &it: edges) {
        int u = it[0];
        int v = it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    vector<bool> visited(V, false);

    for (int i=0; i<V; i++) {
        if (!visited[i]) {
            vector<int> component;
            dfs(i, adj, visited, component);
            ans.push_back(component);
        }
    }

    return ans;

}

int main() {

    

    return 0;
}