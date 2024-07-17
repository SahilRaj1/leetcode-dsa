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
public:
    static bool path(TreeNode* root, int value, string &s) {
        if (root->val == value) {
            return true;
        }
        if (root->left and path(root->left, value, s)) {
            s.push_back('L');
        } else if (root->right and path(root->right, value, s)) {
            s.push_back('R');
        }
        return !s.empty();
    }

    string getDirections(TreeNode* root, int startValue, int destValue) {
        string start = "", dest = "";
        path(root, startValue, start);
        path(root, destValue, dest);
        while (!start.empty() and !dest.empty() and start.back() == dest.back()) {
            start.pop_back();
            dest.pop_back();
        }
        return string(start.size(),'U')+string(rbegin(dest),rend(dest));
    }
};

int main() {

    

    return 0;
}