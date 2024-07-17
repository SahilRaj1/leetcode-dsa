/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int val) {
        this->val = val;
    }
};

class Solution {
private:
    bool hsh[1001];
public:
    void postOrder(TreeNode* &root, bool flag, vector<TreeNode*> &ans) {
        if (root == NULL) {
            return;
        }
        postOrder(root->left, hsh[root->val], ans);
        postOrder(root->right, hsh[root->val], ans);
        if (!hsh[root->val]) {
            if (flag) {
                ans.push_back(root);
            }
        } else {
            root = NULL;
        }
    }

    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> ans;
        for (auto value: to_delete)
            hsh[value] = true;
        postOrder(root, true, ans);
        return ans;
    }
};

int main() {

    

    return 0;
}