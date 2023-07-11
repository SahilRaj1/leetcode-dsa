/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:

    void parentMapping(TreeNode* root, map<TreeNode*, TreeNode*> &parent) {
        queue<TreeNode*> q;
        q.push(root);
        parent[root] = NULL;
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            if (node->left) {
                q.push(node->left);
                parent[node->left] = node;
            }
            if (node->right) {
                q.push(node->right);
                parent[node->right] = node;
            }
        }
    }

    TreeNode* findTarget(TreeNode* root, int target) {
        if (root == NULL) {
            return NULL;
        }

        if (root->val == target) {
            return root;
        }

        TreeNode* l = findTarget(root->left, target);
        TreeNode* r = findTarget(root->right, target);

        if (l == NULL) {
            return r;
        }

        return l;
    }

    void DFS(TreeNode* root, int k, vector<int> &ans, vector<bool> &visited, map<TreeNode*, TreeNode*> &parent) {
        if (root == NULL) {
            return;
        }

        visited[root->val] = true;

        if (k == 0) {
            ans.push_back(root->val);
            return;
        }

        if (parent[root] and !visited[parent[root]->val]) {
            DFS(parent[root], k-1, ans, visited, parent);
        }
        if (root->left and !visited[root->left->val]) {
            DFS(root->left, k-1, ans, visited, parent);
        }
        if (root->right and !visited[root->right->val]) {
            DFS(root->right, k-1, ans, visited, parent);
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*, TreeNode*> parent;
        parentMapping(root, parent);
        TreeNode* node = findTarget(root, target->val);
        vector<int> ans;
        vector<bool> visited(501, false);
        DFS(node, k, ans, visited, parent);
        return ans;
    }
};

int main() {

    

    return 0;
}