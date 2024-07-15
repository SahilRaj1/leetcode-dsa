/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
    }
};

class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        map<int, TreeNode*> hsh;
        map<int, int> child;
        for (auto &d: descriptions) {
            if (hsh[d[0]] == NULL) {
                hsh[d[0]] = new TreeNode(d[0]);
            }
            TreeNode *node;
            if (hsh[d[1]] == NULL) {
                node = new TreeNode(d[1]);
            } else {
                node = hsh[d[1]];
            }
            if (d[2]) {
                hsh[d[0]]->left = node;
            } else {
                hsh[d[0]]->right = node;
            }
            hsh[node->val] = node;
            child[d[1]] = true;
        }
        for (auto &d: descriptions) {
            if (!child[d[0]]) {
                return hsh[d[0]];
            }
        }
        return NULL;
    }
};

int main() {

    

    return 0;
}