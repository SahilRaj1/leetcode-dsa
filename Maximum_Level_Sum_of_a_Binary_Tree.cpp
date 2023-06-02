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

    void solve(TreeNode* root, int level, vector<int>& sums) {

        if (root == NULL) {
            return;
        }

        if (level >= sums.size()) {
            sums.push_back(0);
        }

        sums[level] += root->val;
        solve(root->left, level+1, sums);
        solve(root->right, level+1, sums);

    }

    int maxLevelSum(TreeNode* root) {
        vector<int> sums;
        solve(root, 0, sums);
        int ans = 0;
        for (int i=0; i<sums.size(); i++) {
            if (sums[i] > sums[ans]) {
                ans = i;
            }
        }
        return ans+1;
    }
};

int main() {

    

    return 0;
}