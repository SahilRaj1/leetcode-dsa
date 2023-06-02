/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {};
};

vector<int> getTopView(TreeNode *root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }

    map<int, int> mp;
    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        auto temp = q.front();
        q.pop();

        TreeNode* node = temp.first;
        int hd = temp.second;
        if (mp.find(hd) == mp.end()) {
            mp[hd] = node->data;
        }

        if (node->left) {
            q.push({node->left, hd-1});
        }
        if (node->right) {
            q.push({node->right, hd+1});
        }
    }

    for (auto &it: mp) {
        ans.push_back(it.second);
    }

    return ans;
}

int main() {

    

    return 0;
}