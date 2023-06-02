/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Node {
public :
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

Node* solve(Node *root, int targetNodeVal, int &k) {

    // base cases
    if (root == NULL) {
        return NULL;
    }

    if (root->data == targetNodeVal) {
        return root;
    }

    // left
    Node* left = solve(root->left, targetNodeVal, k);

    // right
    Node* right = solve(root->right, targetNodeVal, k);

    if ((left != NULL and right == NULL) or (left == NULL and right != NULL)) {

        k--;
        if (k <= 0) {
            // locks the kth ancestor
            k = INT_MAX;
            return root;
        }
        return left == NULL ? right : left;
        
    }

    // left == NULL and right == NULL
    return NULL;

}

int findKthAncestor(Node *root, int targetNodeVal, int k) {
    Node* ans = solve(root, targetNodeVal, k);
    return ans->data == targetNodeVal ? -1 : ans->data;
}

int findKthAncestor(Node *root, int targetNodeVal, int k) {
    int ans = k;
    root = solve(root, targetNodeVal, ans);
    if (ans == NULL) {
        return -1;
    }
    return ans;
}

int main() {

    

    return 0;
}