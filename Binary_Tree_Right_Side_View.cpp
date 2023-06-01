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

    void levelOrder(TreeNode* root, int level, vector<int> &ans) {

        if (root == NULL) {
            return;
        }

        if (level == ans.size()) {
            ans.push_back(root->val);
        }

        levelOrder(root->right, level+1, ans);
        levelOrder(root->left, level+1, ans);

    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        levelOrder(root, 0, ans);
        return ans;
    }
};

int main() {

    

    return 0;
}