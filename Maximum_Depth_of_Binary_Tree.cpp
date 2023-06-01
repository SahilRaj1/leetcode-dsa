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
    int maxDepth(TreeNode* root) {
        // base case
        if (root == NULL) {
            return 0;
        }
        int left = maxDepth(root->left) + 1;
        int right = maxDepth(root->right) + 1;
        return max(left, right);
    }
};

int main() {

    

    return 0;
}