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

    void solve(TreeNode* root, int num, vector<int>& nums) {
        if (root == NULL) {
            return;
        }
        if (root->left == NULL and root->right == NULL) {
            nums.push_back(num*10 + root->val);
            return;
        }
        if (root->left) {
            solve(root->left, (num*10)+root->val, nums);
        }
        if (root->right) {
            solve(root->right, (num*10)+root->val, nums);
        }
    }

    int sumNumbers(TreeNode* root) {
        vector<int> nums;
        solve(root, 0, nums);
        int ans = accumulate(nums.begin(), nums.end(), 0);
        return ans;
    }
};

int main() {

    

    return 0;
}