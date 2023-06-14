/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void dfs(int node, unordered_map<int, list<pair<int, int>>> &adj, vector<bool> &visited, stack<int> &st) {
    
        visited[node] = true;
        for (auto &it: adj[node]) {
            if (!visited[it.first]) {
                dfs(it.first, adj, visited, st);
            }
        }
    
        st.push(node);
    
    }
  
    vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        
        unordered_map<int, list<pair<int, int>>> adj;
    	for (auto &it: edges) {
    		adj[it[0]].push_back({it[1], it[2]});
    	}
    	
    	vector<bool> visited(N, false);
        stack<int> st;
    
        for (int i=0; i<N; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited, st);
            }
        }
    
        vector<int> distance(N, -1);
        distance[0] = 0;    // distance from node 0
        while (!st.empty()) {
            int curr = st.top();
            st.pop();
            if (distance[curr] != -1) {
                for (auto &it: adj[curr]) {
                    if (distance[it.first] == -1) {
                        distance[it.first] = distance[curr] + it.second;
                    } else {
                        distance[it.first] = min(distance[it.first], distance[curr] + it.second);
                    }
                }
            }
        }
        
        return distance;
        
    }
};

int main() {

    

    return 0;
}