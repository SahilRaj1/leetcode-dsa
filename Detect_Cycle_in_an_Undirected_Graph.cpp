/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

bool detectCycle(int start, unordered_map<int, list<int>> &adj, vector<bool> &visited, vector<int> &parent) {

	queue<int> q;
	q.push(start);
	while (!q.empty()) {
		int front = q.front();
		q.pop();
		visited[front] = true;
		for (auto &it: adj[front]) {
			if (!visited[it]) {
				parent[it] = front;
				q.push(it);
			} else {
				if (parent[front] != it) {
					return true;
				}
			}
		}
	}

	return false;

}

int main() {

	int v, e;
	cin>>v>>e;

	unordered_map<int, list<int>> adj;
	for (int i=0; i<e; i++) {
		int u, v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<bool> visited(v, false);
	vector<int> parent(v, -1);

	for (int i=0; i<v; i++) {
		if (!visited[i]) {
			if (detectCycle(i, adj, visited, parent)) {
				cout<<"True"<<endl;
				return 0;
			}
		}
	}

	cout<<"False"<<endl;

	return 0;
}