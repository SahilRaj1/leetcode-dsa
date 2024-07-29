/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        vector<vector<int>> adj(n);
        for (auto e : edges) {
            adj[e[0] - 1].push_back(e[1] - 1);
            adj[e[1] - 1].push_back(e[0] - 1);
        }

        vector<pair<int, int>> dist(n, {1e9, 1e9});
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        dist[0] = {0, 1e9};
        pq.push({0, 0});

        while (!pq.empty()) {
            auto tp = pq.top();
            int currTime = tp.first, node = tp.second;
            pq.pop();

            if (currTime > dist[node].second) {
                continue;
            }

            int newTime = currTime + time;
            int temp = currTime / change;
            if (temp % 2 == 1)
                newTime = (temp + 1) * change + time;

            for (auto adjNode : adj[node]) {
                if (dist[adjNode].first > newTime) {
                    dist[adjNode].second = dist[adjNode].first;
                    dist[adjNode].first = newTime;
                    pq.push({dist[adjNode].first, adjNode});
                } else if (dist[adjNode].first == newTime) {
                    continue;
                } else if (dist[adjNode].second > newTime) {
                    dist[adjNode].second = newTime;
                    pq.push({dist[adjNode].second, adjNode});
                }
            }
        }
        return dist[n-1].second;
    }
};


int main() {

    

    return 0;
}