/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {};

};

class Solution {
    
    pair<bool,int> solve(Node *root) {
        if (root == NULL) {
            return {true, 0};
        }
        
        if (root->left == NULL and root->right == NULL) {
            return {true, root->data};
        }
    
        pair<bool,int> left = solve(root->left);
        pair<bool,int> right = solve(root->right);
    
        bool leftCheck = left.first;
        bool rightCheck = right.first;
        bool nodeCheck = (left.second + right.second) == root->data;
    
        pair<bool,int> ans;
        ans.first = leftCheck and rightCheck and nodeCheck;
        ans.second = left.second + right.second + root->data;
    
        return ans;
    }
    
    public:
    bool isSumTree(Node* root) {
         return solve(root).first;
    }
    
};

int main() {

    

    return 0;
}