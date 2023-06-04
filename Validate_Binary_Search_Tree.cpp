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

    bool isBST(TreeNode* root, long min, long max) {

        // base case
        if (root == NULL) {
            return true;
        }

        if (root->val > min and root->val < max) {
            bool left = isBST(root->left, min, root->val);
            bool right = isBST(root->right, root->val, max);
            return left and right;
        }

        return false;

    }

    bool isValidBST(TreeNode* root) {
        return isBST(root, (long)INT_MIN-1, (long)INT_MAX+1);
    }
};

int main() {

    

    return 0;
}