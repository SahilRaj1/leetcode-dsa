/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution{
  public:
  
    pair<int, int> solve(Node* root) {
        
        // base case
        if (root == NULL) {
            return {0, 0};
        }
        
        // left call
        auto left = solve(root->left);
        auto right = solve(root->right);
        
        int take = left.second + right.second + root->data;
        int ntake = max(left.first, left.second) + max(right.first, right.second);
        
        // swap and return
        return {take, ntake};
    }  
  
    int getMaxSum(Node* root) {
        auto ans = solve(root);
        return max(ans.first, ans.second);
    }
};

int main() {

    

    return 0;
}