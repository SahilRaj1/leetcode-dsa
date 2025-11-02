/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));

        for (auto& guard: guards) {
            grid[guard[0]][guard[1]] = 2;
        }

        for (auto& wall: walls) {
            grid[wall[0]][wall[1]] = 2;
        }

        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        for (auto& g : guards) {
            int gr = g[0], gc = g[1];
            for (int d = 0; d < 4; ++d) {
                int r = gr + dr[d], c = gc + dc[d];
                while (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] < 2) {
                    grid[r][c] = 1;
                    r += dr[d];
                    c += dc[d];
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) {
                    ans++;
                }
            }
        }

        return ans;
    }
};

int main() {

    

    return 0;
}