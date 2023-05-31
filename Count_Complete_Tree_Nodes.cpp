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
    int countNodes(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int ans = 1;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if (temp->left) {
                ans++;
                q.push(temp->left);
            }
            if (temp->right) {
                ans++;
                q.push(temp->right);
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}