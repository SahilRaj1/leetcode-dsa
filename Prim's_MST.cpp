/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

int minKeyNode(vector<int> &key, vector<bool> &mst) {
    int mn = INT_MAX, ans;
    for (int i=0; i<key.size(); i++) {
        if (key[i] < mn and mst[i] == false) {
            mn = key[i];
            ans = i;
        }
    }
    return ans;
}

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g) {

    unordered_map<int, list<pair<int, int>>> adj;
    for (auto &it: g) {
        int u = it.first.first-1;
        int v = it.first.second-1;
        int w = it.second;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    // creating the data structures required
    vector<int> key(n, INT_MAX);
    vector<bool> mst(n, false);
    vector<int> parent(n, -1);

    // initializing data structures for source node
    key[0] = 0;
    parent[0] = -1;

    for (int i=0; i<n; i++) {

        // find the minimum key node
        int u = minKeyNode(key, mst);

        // mark node as true
        mst[u] = true;

        // check its adjacent nodes
        for (auto &it: adj[u]) {
            int v = it.first;
            int w = it.second;
            if (mst[v] == false and w < key[v]) {
                parent[v] = u;
                key[v] = w;
            }
        }

    }

    vector<pair<pair<int, int>, int>> result;
    for (int i=1; i<n; i++) {
        result.push_back({{parent[i]+1, i+1}, key[i]});
    }

    return result;

}

int main() {

    

    return 0;
}