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

    void postorderTraversal(TreeNode* node, vector<int> &ans) {
        if (node == NULL) {
            return;
        }
        postorderTraversal(node->left, ans);
        postorderTraversal(node->right, ans);
        ans.push_back(node->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorderTraversal(root, ans);
        return ans;
    }
};

int main() {

    

    return 0;
}