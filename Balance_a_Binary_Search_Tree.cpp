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

    void inorder(TreeNode* root, vector<TreeNode*> &arr) {

        if (root == NULL) {
            return;
        }

        inorder(root->left, arr);
        arr.push_back(root);
        inorder(root->right, arr);

    }

    TreeNode* balanceTree(vector<TreeNode*> &arr, int lo, int hi) {

        if (hi<lo) {
            return NULL;
        }

        int mid = lo + (hi-lo)/2;
        TreeNode* temp = arr[mid];
        temp->left = balanceTree(arr, lo, mid-1);
        temp->right = balanceTree(arr, mid+1, hi);

        return temp;

    }

    TreeNode* balanceBST(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }
        vector<TreeNode*> arr;
        inorder(root, arr);
        int n = arr.size();
        TreeNode* ans = balanceTree(arr, 0, n-1);
        return ans;
    }
};

int main() {

    

    return 0;
}