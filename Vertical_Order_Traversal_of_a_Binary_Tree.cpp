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
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        vector<vector<int>> ans;
        if (root == NULL) {
            return ans;
        }

        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 1}});

        map<int, map<int, vector<int>>> mp;

        while (!q.empty()) {

            auto temp = q.front();
            q.pop();

            TreeNode* currNode = temp.first;
            int hd = temp.second.first;
            int level = temp.second.second;

            mp[hd][level].push_back(currNode->val);

            if (currNode->left) {
                q.push({currNode->left, {hd-1, level+1}});
            }
            if (currNode->right) {
                q.push({currNode->right, {hd+1, level+1}});
            }

        }

        for (auto &hd: mp)  {
            vector<int> vertical;
            for (auto &level: hd.second) {
                sort(level.second.begin(), level.second.end());
                for (auto &it: level.second) {
                    vertical.push_back(it);
                }
            }
            ans.push_back(vertical);
        }

        return ans;

    }
};

int main() {

    

    return 0;
}