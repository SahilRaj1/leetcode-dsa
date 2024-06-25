/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
};

class Solution {
public:
    int sum = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if (root->right) {
            bstToGst(root->right);
        }
        root->val += sum;
        sum = root->val;
        if (root->left) {
            bstToGst(root->left);
        }
        return root;
    }
};

int main() {

    

    return 0;
}