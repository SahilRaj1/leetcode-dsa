/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
  
    int countNodes(struct Node* root) {
        if (root == NULL) {
            return 0;
        }
        int ans = 1 + countNodes(root->left) + countNodes(root->right);
        return ans;
    }
    
    bool isCBT(struct Node* root, int i, int nodes) {
        if (root == NULL) {
            return true;
        }
        if (i >= nodes) {
            return false;
        }
        bool left = isCBT(root->left, 2*i+1, nodes);
        bool right = isCBT(root->right, 2*i+2, nodes);
        return left and right;
    }
    
    bool isMaxHeap(struct Node* root) {
        if (root->left == NULL and root->right == NULL) {
            return true;
        }
        if (root->right == NULL) {
            return root->left->data < root->data;
        }
    
        int left = isMaxHeap(root->left);
        int right = isMaxHeap(root->right);
        return left and right and (root->left->data < root->data) and (root->right->data < root->data);
    }
  
    bool isHeap(struct Node* tree) {
        int n = countNodes(tree);
        int index = 0;
        return isCBT(tree, index, n) and isMaxHeap(tree);
    }
};

int main() {

    

    return 0;
}