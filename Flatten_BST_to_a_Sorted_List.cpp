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

void inorder(TreeNode<int>* root, vector<TreeNode<int>*> &arr) {

    if (root == NULL) {
        return;
    }

    inorder(root->left, arr);
    arr.push_back(root);
    inorder(root->right, arr);

}

TreeNode<int>* flatten(TreeNode<int>* root) {
    if (root == NULL) {
        return NULL;
    }
    vector<TreeNode<int>*> arr;
    inorder(root, arr);
    int n = arr.size();
    for (int i=0; i<n-1; i++) {
        arr[i]->left = NULL;
        arr[i]->right = arr[i+1];
    }
    arr[n-1]->left = NULL;
    arr[n-1]->right = NULL;
    return arr[0];
}

int main() {

    

    return 0;
}