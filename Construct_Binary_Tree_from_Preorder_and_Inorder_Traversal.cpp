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
    int findPosition(vector<int>& inorder, int element, int n) {
        for (int i=0; i<n; i++) {
            if (inorder[i] == element) {
                return i;
            }
        }
        return -1;
    }

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int &index, int inorderStart, int inorderEnd, int n) {

        // base case
        if (index > n or inorderStart > inorderEnd) {
            return NULL;
        }

        // take node from preorder and find it in inorder
        int element = preorder[index++];
        TreeNode* root = new TreeNode(element);
        int pos = findPosition(inorder, element, n);

        // recursive calls
        root->left = solve(preorder, inorder, index, inorderStart, pos-1, n);
        root->right = solve(preorder, inorder, index, pos+1, inorderEnd, n);

        return root;

    } 

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int preorderIndex = 0;
        TreeNode* root = solve(preorder, inorder, preorderIndex, 0, n-1, n);
        return root;
    }
};

int main() {

    

    return 0;
}