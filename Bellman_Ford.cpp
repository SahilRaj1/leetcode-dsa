/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    
    vector<int> dist(n+1, 1000000000);
    dist[src] = 0;

    for (int i=0; i<n-1; i++) {
        for (auto &edge: edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            dist[v] = min(dist[v], dist[u] + w);
        }
    }

    return dist[dest] > 999000000 ? 1000000000 : dist[dest];

}

int main() {

    

    return 0;
}   