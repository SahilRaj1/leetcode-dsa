/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class BinaryTreeNode {
    
public :
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int data) {
    this -> left = NULL;
    this -> right = NULL;
    this -> data = data;
    }
};

void inorder(BinaryTreeNode* root, vector<int> &arr) {
    if (root == NULL) {
        return;
    }
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

void makeHeap(BinaryTreeNode* root, vector<int> &arr, int &i) {
    if (root == NULL) {
        return;
    }
    if (i > arr.size()) {
        return;
    }
    root->data = arr[i++];
    makeHeap(root->left, arr, i);
    makeHeap(root->right, arr, i);
    
}

BinaryTreeNode* convertBST(BinaryTreeNode* root) {
	vector<int> arr;
    inorder(root, arr);
    int i=0;
    makeHeap(root, arr, i);
    return root;
}

int main() {

    

    return 0;
}