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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL) {
            return q == NULL;
        }
        if (q == NULL) {
            return p == NULL;
        }
        if (p->val != q->val) {
            return false;
        }
        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);
        if (left and right) {
            return true;
        }
        return false;
    }
};

int main() {

    

    return 0;
}