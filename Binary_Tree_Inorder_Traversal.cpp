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

    void inorderTraversal(TreeNode* node, vector<int> &ans) {
        if (node == NULL) {
            return;
        }
        inorderTraversal(node->left, ans);
        ans.push_back(node->val);
        inorderTraversal(node->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderTraversal(root, ans);
        return ans;
    }
};

int main() {

    

    return 0;
}