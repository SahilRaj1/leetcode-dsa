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
    int ans = 0;
public:
    vector<int> dfs(TreeNode* root, int distance) {
        vector<int> hsh(11);
        if (root == NULL) {
            return hsh;
        }
        if (root->left == NULL and root->right == NULL) {
            hsh[1] = 1;
        }
        vector<int> left = dfs(root->left, distance);
        vector<int> right = dfs(root->right, distance);
        for (int i=1; i<distance; i++) {
            for (int j=0; j<=distance-i; j++) {
                ans += left[i] * right[j];
            }
        }
        for (int i=2; i<11; i++) {
            hsh[i] += left[i-1] + right[i-1];
        }
        return hsh;
    }

    int countPairs(TreeNode* root, int distance) {
        dfs(root, distance);
        return ans;
    }
};

int main() {

    

    return 0;
}