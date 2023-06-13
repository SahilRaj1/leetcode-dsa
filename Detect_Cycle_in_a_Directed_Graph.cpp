/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

bool detectCycle(int node, unordered_map<int, list<int>> &adj, vector<bool> &visited, vector<bool> &dfsVisited) {

	visited[node] = true;
	dfsVisited[node] = true;

	for (auto &it: adj[node]) {
		if (!visited[it]) {
			if (detectCycle(it, adj, visited, dfsVisited)) {
				return true;
			}
		} else {
			if (dfsVisited[it]) {
				return true;
			}
		}
	}

	dfsVisited[node] = false;
	return false;

}

bool isCyclic(vector<vector<int>>& edges, int v, int e) {
	
	unordered_map<int, list<int>> adj;
	for (auto &it: edges) {
		int u = it[0];
		int v = it[1];
		adj[u].push_back(v);
	}

	vector<bool> visited(v, false);
    vector<bool> dfsVisited(v, false);

	for (int i=0; i<v; i++) {
		if (!visited[i]) {
			if (detectCycle(i, adj, visited, dfsVisited)) {
				return true;
			}
		}
	}

	return false;

}

int main() {

    

    return 0;
}