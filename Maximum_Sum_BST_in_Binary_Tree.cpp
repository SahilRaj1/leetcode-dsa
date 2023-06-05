/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};

class info {
public:
    int maxi;
    int mini;
    bool isBST;
    int sum;
};

class Solution {
public:

    info solve (TreeNode* root, int &ans) {

        if (root == NULL) {
            return {INT_MIN, INT_MAX, true, 0};
        }

        info left = solve(root->left, ans);
        info right = solve(root->right, ans);

        info curr;
        curr.maxi = max(right.maxi, root->val);
        curr.mini = min(left.mini, root->val);
        curr.sum = left.sum + right.sum + root->val;

        if (left.isBST and right.isBST and (root->val > left.maxi) and (root->val < right.mini)) {
            curr.isBST = true;
        } else {
            curr.isBST = false;
        }

        if (curr.isBST) {
            ans = max(ans, curr.sum);
        }

        return curr;

    }

    int maxSumBST(TreeNode* root) {
        int ans = 0;
        info res = solve(root, ans);
        return ans;
    }
};

int main() {

    

    return 0;
}