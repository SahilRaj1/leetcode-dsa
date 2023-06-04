/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};

// recursive
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if (root == NULL) {
            return NULL;
        }

        if (root->val > p->val and root->val > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        }

        else if (root->val < p->val and root->val < q->val) {
            return lowestCommonAncestor(root->right, p, q);
        }

        return root;

    }
};

// iterative
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        while (root) {
            if (root->val < p->val and root->val < q->val) {
                root = root->right;
            }
            else if (root->val > p->val and root->val > q->val) {
                root = root->left;
            }
            else {
                return root;
            }
        }

        return NULL;

    }
};

int main() {

    

    return 0;
}