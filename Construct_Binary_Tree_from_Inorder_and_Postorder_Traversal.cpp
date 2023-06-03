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

    TreeNode* solve(vector<int>& postorder, vector<int>& inorder, int &index, int inorderStart, int inorderEnd, int n) {

        // base case
        if (index < 0 or inorderStart > inorderEnd) {
            return NULL;
        }

        // take node from postorder and find it in inorder
        int element = postorder[index--];
        TreeNode* root = new TreeNode(element);
        int pos = findPosition(inorder, element, n);

        // recursive calls
        root->right = solve(postorder, inorder, index, pos+1, inorderEnd, n);
        root->left = solve(postorder, inorder, index, inorderStart, pos-1, n);

        return root;

    } 

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
        int postorderIndex = n-1;
        TreeNode* root = solve(postorder, inorder, postorderIndex, 0, n-1, n);
        return root;
    }
};

int main() {

    

    return 0;
}