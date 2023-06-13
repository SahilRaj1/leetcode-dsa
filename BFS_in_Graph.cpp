/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

void createAdjList(unordered_map<int, set<int>> &adj, vector<pair<int, int>> &edges) {
    
    for (auto &edge: edges) {
        edge.first;
        edge.second;
        adj[edge.first].insert(edge.second);
        adj[edge.second].insert(edge.first);
    }

}

void bfs(unordered_map<int, set<int>> &adj, vector<int> &ans, vector<bool> &visited, int node) {
    
    queue<int> q;
    q.push(node);
    while (!q.empty()) {
        int front = q.front();
        q.pop();
        if (!visited[front]) {
            ans.push_back(front);
            visited[front] = true;
            for (auto &it: adj[front]) {
                if (!visited[it]) {
                    q.push(it);
                }
            }
        }
    }

}

vector<int> BFS(int vertex, vector<pair<int, int>> edges) {
    
    unordered_map<int, set<int>> adj;
    vector<int> ans;
    vector<bool> visited(vertex, false);

    createAdjList(adj, edges);

    for (int i=0; i<vertex; i++) {
        if (!visited[i]) {
            bfs(adj, ans, visited, i);
        }
    }

    return ans;
    
}

int main() {

    

    return 0;
}