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

    pair<bool, int> solve(TreeNode* root) {
        if (root == NULL) {
            return {true, 0};
        }

        pair<bool, int> left = solve(root->left);
        pair<bool, int> right = solve(root->right);

        bool leftBalanced = left.first;
        bool rightBalanced = right.first;
        bool nodeBalanced = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.first = leftBalanced and rightBalanced and nodeBalanced;
        ans.second = max(left.second, right.second) + 1;

        return ans;
    }

    bool isBalanced(TreeNode* root) {
        return solve(root).first;
    }
};

int main() {

    

    return 0;
}