/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        TreeNode *l = NULL, *r = NULL;
        if (root->left) {
            l = removeLeafNodes(root->left, target);
        }
        if (root->right) {
            r = removeLeafNodes(root->right, target);
        }
        root->left = l;
        root->right = r;
        if (!root->left and !root->right and root->val == target) {
            root = NULL;
        }
        return root;
    }
};

int main() {

    

    return 0;
}