/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};

class Solution {
public:

    void inorder(TreeNode* root, vector<int> &arr) {

        if (root == NULL) {
            return;
        }

        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);

    }

    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        inorder(root, arr);
        int n = arr.size();
        int i = 0, j = n-1, sum;
        while (i<j) {
            sum = arr[i] + arr[j];
            if (sum > k) {
                j--;
            }
            else if (sum < k) {
                i++;
            }
            else {
                return true;
            }
        }
        return false;
    }
};

int main() {

    

    return 0;
}