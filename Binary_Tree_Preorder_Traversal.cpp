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
    void preorderTraversal(TreeNode* node, vector<int> &ans) {
        if (node == NULL) {
            return;
        }
        ans.push_back(node->val);
        preorderTraversal(node->left, ans);
        preorderTraversal(node->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorderTraversal(root, ans);
        return ans;
    }
};

int main() {

    

    return 0;
}