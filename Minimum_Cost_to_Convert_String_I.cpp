/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        const int inf = 1<<29;
        vector<vector<int>> graph(26, vector<int>(26, inf));
        for (int i=0; i<26; i++) {
            graph[i][i] = 0;
        }
        
        for (int i=0; i<original.size(); i++) {
            int x = original[i] - 'a';
            int y = changed[i] - 'a';
            int z = cost[i];
            graph[x][y] = min(graph[x][y], z);
        }

        for (int k=0; k<26; k++) {
            for (int i=0; i<26; i++) {
                for (int j=0; j<26; j++) {
                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                }
            }
        }

        long long ans = 0;
        int n = source.length();
        for (int i=0; i<n; i++) {
            int x = source[i] - 'a';
            int y = target[i] - 'a';
            if (x != y) {
                if (graph[x][y] >= inf) {
                    return -1;
                }
                ans += graph[x][y];
            }
        }

        return ans;
    }
};

int main() {

    

    return 0;
}