/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};

};

class Solution {
public:

    void solve(TreeNode* node, int level, vector<vector<int>>& ans) {
        if (node == NULL) {
            return;
        }
        if (level >= ans.size()) {
            ans.push_back({});
        }
        ans[level].push_back(node->val);
        solve(node->left, level+1, ans);
        solve(node->right, level+1, ans);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        solve(root, 0, ans);
        reverse(begin(ans), end(ans));
        return ans;
    }
};

int main() {

    

    return 0;
}