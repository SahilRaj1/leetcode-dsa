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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        if (root == NULL) {
            return ans;
        }
        bool leftToRight = true;
        while (!q.empty()) {
            int n = q.size();
            vector<int> temp(n);
            for (int i=0; i<n; i++) {
                TreeNode* node = q.front();
                q.pop();

                int ind = leftToRight ? i : n-i-1;
                temp[ind] = node->val;

                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
            leftToRight = !leftToRight;
            ans.push_back(temp);
        }
        return ans;
    }
};

int main() {

    

    return 0;
}