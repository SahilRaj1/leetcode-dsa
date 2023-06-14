/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	unordered_map<int, list<int>> adj;
	for (auto &it: edges) {
		int u = it.first-1;
		int v = it.second-1;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<bool> visited(n, false);
	vector<int> parent(n, -1);

	// bfs
	queue<int> q;
	q.push(s-1);
	visited[s-1] = true;

	while (!q.empty()) {
		int front = q.front();
		q.pop();
		for (auto &it: adj[front]) {
			if (!visited[it]) {
				q.push(it);
				visited[it] = true;
				parent[it] = front;
			}
		}
	}

	vector<int> ans;
	int temp = t-1;
	ans.push_back(temp+1);
	while (temp != s-1) {
		temp = parent[temp];
		ans.push_back(temp+1);
	}

	reverse(ans.begin(), ans.end());
	return ans;
	
}

int main() {

    

    return 0;
}