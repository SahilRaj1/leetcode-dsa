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

    void levelOrder(TreeNode* root, int level, vector<int> &leftMosts) {
        if (root == NULL) {
            return;
        }
        if (level == leftMosts.size()) {
            leftMosts.push_back(root->val);
        }
        levelOrder(root->left, level+1, leftMosts);
        levelOrder(root->right, level+1, leftMosts);
    }

    int findBottomLeftValue(TreeNode* root) {
        vector<int> leftMosts;
        levelOrder(root, 0, leftMosts);
        int n = leftMosts.size();
        return leftMosts[n-1];
    }
};

int main() {

    

    return 0;
}