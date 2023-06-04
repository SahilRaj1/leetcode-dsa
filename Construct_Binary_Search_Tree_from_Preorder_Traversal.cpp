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

    TreeNode* solve(vector<int>& preorder, int mini, int maxi, int &i) {

        if (i >= preorder.size()) {
            return NULL;
        }

        if (preorder[i] < mini or preorder[i] > maxi) {
            return NULL;
        }

        TreeNode* node = new TreeNode(preorder[i++]);
        node->left = solve(preorder, mini, node->val, i);
        node->right = solve(preorder, node->val, maxi, i);

        return node;

    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
       if (preorder.size() == 0) {
           return NULL;
        }
        int mini = INT_MIN, maxi = INT_MAX, i = 0;
        TreeNode* ans = solve(preorder, mini, maxi, i);
        return ans;
    }
};

int main() {

    

    return 0;
}