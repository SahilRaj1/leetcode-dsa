/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

bool detectNegativeCycle(int n, int m, vector<vector<int>> &edges) {
	
	vector<int> dist(n+1, 1e9);
    dist[1] = 0;

    for (int i=0; i<n-1; i++) {
        for (auto &edge: edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            dist[v] = min(dist[v], dist[u] + w);
        }
    }

	for (auto &edge: edges) {
		int u = edge[0];
		int v = edge[1];
		int w = edge[2];
		if (dist[u] + w < dist[v]) {
			return true;
		}
	}

	return false;

}

int main() {

    

    return 0;
}