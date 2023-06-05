/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

template <typename T>

class TreeNode{

    public :
        int data;
        TreeNode *left;
        TreeNode *right;

        TreeNode(int data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
        if (left){
        delete left;
        }

        if (right){
        delete right;
        }
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

vector<TreeNode<int>*> mergeArrays(vector<TreeNode<int>*> &arr1, vector<TreeNode<int>*> &arr2) {

    int n = arr1.size(), m = arr2.size();
    vector<TreeNode<int>*> ans(n+m);
    int i = 0, j = 0, k = 0;
    
    while (i < n and j < m) {
        if (arr1[i]->data < arr2[j]->data) {
            ans[k] = arr1[i];
            i++;
            k++;
        } else {
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < n) {
        ans[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        ans[k] = arr2[j];
        j++;
        k++;
    }

    return ans;

}

TreeNode<int>* inorderToBST(vector<TreeNode<int>*> &arr, int lo, int hi) {

    if (lo>hi) {
        return NULL;
    }
    
    int mid = lo + (hi-lo)/2;
    TreeNode<int>* root = arr[mid];
    root->left = inorderToBST(arr, lo, mid-1);
    root->right = inorderToBST(arr, mid+1, hi);

    return root;

}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    
    vector<TreeNode<int>*> arr1, arr2;
    inorder(root1, arr1);
    inorder(root2, arr2);
    vector<TreeNode<int>*> arr = mergeArrays(arr1, arr2);
    return inorderToBST(arr, 0, arr.size()-1);

}

int main() {

    

    return 0;
}