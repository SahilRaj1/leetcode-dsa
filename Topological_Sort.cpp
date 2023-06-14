/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, list<int>> &adj, vector<bool> &visited, stack<int> &st) {

    visited[node] = true;
    for (auto &it: adj[node]) {
        if (!visited[it]) {
            dfs(it, adj, visited, st);
        }
    }

    st.push(node);

}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    
    unordered_map<int, list<int>> adj;
    for (auto &it: edges) {
        int u = it[0];
        int v = it[1];
        adj[u].push_back(v);
    }

    vector<bool> visited(v, false);
    stack<int> st;

    for (int i=0; i<v; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited, st);
        }
    }

    vector<int> ans;
    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    return ans;

}

int main() {

    

    return 0;
}