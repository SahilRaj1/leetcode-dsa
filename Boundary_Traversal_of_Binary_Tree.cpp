/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
    public :
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode() {
        if(left)
            delete left;
        if(right)
            delete right;
    }
};

void traverseLeft(TreeNode<int>* root, vector<int>& ans) {

    if (root == NULL or (root->left == NULL and root->right == NULL)) {
        return;
    }

    ans.push_back(root->data);
    if (root->left) {
        traverseLeft(root->left, ans);
    } else {
        traverseLeft(root->right, ans);
    }

}

void traverseLeaf(TreeNode<int>* root, vector<int>& ans) {

    if (root == NULL) {
        return;
    }

    if (root->left == NULL and root->right == NULL) {
        ans.push_back(root->data);
        return;
    }

    if (root->left) {
        traverseLeaf(root->left, ans);
    }
    if (root->right) {
        traverseLeaf(root->right, ans);
    }

}

void traverseRight(TreeNode<int>* root, vector<int>& ans) {
    if (root == NULL or (root->left == NULL and root->right == NULL)) {
        return;
    }

    if (root->right) {
        traverseRight(root->right, ans);
    } else {
        traverseRight(root->left, ans);
    }
    ans.push_back(root->data);
}

vector<int> traverseBoundary(TreeNode<int>* root){
    
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }
    
    ans.push_back(root->data);

    if (root->left == NULL and root->right == NULL) {
        return ans;
    }

    // left part
    traverseLeft(root->left, ans);

    // leaf nodes
    traverseLeaf(root, ans);

    // traverse right reverse
    traverseRight(root->right, ans);

    return ans;

}

int main() {

    

    return 0;
}