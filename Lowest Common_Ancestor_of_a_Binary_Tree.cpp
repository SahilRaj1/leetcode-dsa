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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if (root == NULL) {
            return NULL;
        }

        if (root->val == p->val or root->val == q->val) {
            return root;
        }

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if (left != NULL and right != NULL) {
            return root;
        } else if (left == NULL and right != NULL) {
            return right;
        } else if (left != NULL and right == NULL) {
            return left;
        } else {
            return NULL;
        }

    }
};

int main() {

    

    return 0;
}