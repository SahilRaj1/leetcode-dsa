/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int> &a, vector<int> &b) {
  return a[0] < b[0];
}

/* Function to initialize a disjoint set */
void makeSet(vector<int> &parent, vector<int> &rank, int v) {

    for (int i=0; i<v; i++) {
        // set parent of node as the node itself and rank as 0
        parent[i] = i;
        rank[i] = 0;
    }

}

/* Function to return the root parent of a given node */
int findParent(vector<int> &parent, int node) {

    // base case
    if (parent[node] == node) {
        return node;
    }

    // set parent of node as the root parent and return it
    return parent[node] = findParent(parent, parent[node]);

}

/* Function to union two disjoint sets */
void unionSet(int u, int v, vector<int> &parent, vector<int> &rank) {

    // find parents of both nodes
    u = findParent(parent, u);
    v = findParent(parent, v);

    // compare ranks and change parent accordingly
    if (rank[u] < rank[v]) {
        parent[u] = v;
    }
    else if (rank[v] < rank[u]) {
        parent[v] = u;
    }
    else {
        parent[v] = u;
        rank[u]++;
    }

}

int kruskal(vector<vector<int>> &edges, int v) {

    // preparing the disjoint set
    vector<int> parent(v);
    vector<int> rank(v);

    // initializing the disjoint set
    makeSet(parent, rank, v);

    // sort edges based on weights
    sort(edges.begin(), edges.end(), compare);

    int minCost = 0;

    // traverse all edges
    for (auto &it: edges) {

        int u = findParent(parent, it[1]);
        int v = findParent(parent, it[2]);
        int w = it[0];

        if (u != v) {
            minCost += w;
            unionSet(u, v, parent, rank);
        }

    }

    return minCost;

}

int minimumSpanningTree(vector<vector<int>>& edges, int n) {

	for (int i=0; i<edges.size(); i++) {
		int u = edges[i][0];
		int v = edges[i][1];
		int w = edges[i][2];
        edges[i][0] = w;
        edges[i][1] = u;
        edges[i][2] = v;
	}

  return kruskal(edges, n);

}

int main() {

    

    return 0;
}