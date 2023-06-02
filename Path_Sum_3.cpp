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

    void solve(TreeNode* root, int targetSum, int &ans, vector<int>& path) {
        
        // base case
        if (root == NULL) {
            return;
        }

        path.push_back(root->val);

        // left
        solve(root->left, targetSum, ans, path);

        // right
        solve(root->right, targetSum, ans, path);

        int n = path.size();
        long long sum = 0;
        for (int i=n-1; i>=0; i--) {
            sum += path[i] + 0LL;
            if (sum == targetSum) {
                ans++;
            }
        }

        path.pop_back();

    }

    int pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        int ans = 0;
        solve(root, targetSum, ans, path);
        return ans;
    }
};

int main() {

    

    return 0;
}