/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:

    int val;
    TreeNode* left;
    TreeNode* right;

};

class Solution {
public:
    int minDepth(TreeNode* root) {

        if (root == NULL) {
            return 0;
        }
        
        if (root->left == NULL and root->right == NULL) {
            return 1;
        }

        int l = 1000000, r = 1000000;
        if (root->left) {
            l = minDepth(root->left) + 1;
        }
        if (root->right) {
            r = minDepth(root->right) + 1;
        }

        return min(l, r);

    }
};

int main() {

    

    return 0;
}