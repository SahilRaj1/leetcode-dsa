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

class info {
public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve (TreeNode<int>* root, int &ans) {

    if (root == NULL) {
        return {INT_MIN, INT_MAX, true, 0};
    }

    info left = solve(root->left, ans);
    info right = solve(root->right, ans);

    info curr;
    curr.maxi = max(right.maxi, root->data);
    curr.mini = min(left.mini, root->data);
    curr.size = left.size + right.size + 1;

    if (left.isBST and right.isBST and (root->data > left.maxi) and (root->data < right.mini)) {
        curr.isBST = true;
    } else {
        curr.isBST = false;
    }

    if (curr.isBST) {
        ans = max(ans, curr.size);
    }

    return curr;

}

int largestBST(TreeNode<int>* root)  {
    int ans = 0;
    info res = solve(root, ans);
    return ans;
}

int main() {

    

    return 0;
}