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
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if (root == NULL) {
            return NULL;
        }

        TreeNode* left = NULL;
        TreeNode* right = NULL; 
        if (val < root->val) {
            left = searchBST(root->left, val);
        } else if (val > root->val) {
            right = searchBST(root->right, val);
        } else {
            return root;
        }

        if (left != NULL and right == NULL) {
            return left;
        }
        if (left == NULL and right != NULL) {
            return right;
        }

        // left == NULL and right == NULL
        return NULL;

    }
};

int main() {

    

    return 0;
}