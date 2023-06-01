/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode {
public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

void postOrder(BinaryTreeNode<int> *node, int &ans) {
    if (node == NULL) {
        return;
    }
    postOrder(node->left, ans);
    postOrder(node->right, ans);
    if (node->left == NULL and node->right == NULL) {
        ans++;
    }
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int ans = 0;
    postOrder(root, ans);
    return ans;
}

int main() {

    

    return 0;
}