/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {};
};

class Solution {
public:

    TreeNode* findPred(TreeNode* root) {
        TreeNode* temp = root->left;
        while (temp->right and temp->right != root) {
            temp = temp->right;
        }
        return temp;
    }

    void morrisTraversal(TreeNode* &root) {
        TreeNode* curr = root;
        while (curr) {
            if (curr->left) {
                TreeNode* pred = findPred(curr);
                pred->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }

    void flatten(TreeNode* root) {
        morrisTraversal(root);
    }
};

int main() {

    

    return 0;
}