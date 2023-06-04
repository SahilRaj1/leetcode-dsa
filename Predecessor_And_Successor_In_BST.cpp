/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

template <typename T>

class BinaryTreeNode
{
public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode() {
        if (left)
        {
            delete left;
        }
        if (right)
        {
            delete right;
        }
    }
};

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key) {
    
    BinaryTreeNode<int>* node = root;
    int pred = -1;
    int succ = -1;

    // get node
    while (node->data != key) {
        if (key < node->data) {
            succ = node->data;
            node = node->left;
        } else {
            pred = node->data;
            node = node->right;
        }
    }

    // pred
    BinaryTreeNode<int>* left = node->left;
    while (left) {
        pred = left->data;
        left = left->right;
    }

    // succ
    BinaryTreeNode<int>* right = node->right;
    while (right) {
        succ = right->data;
        right = right->left;
    }

    return {pred, succ};
}


int main() {

    

    return 0;
}