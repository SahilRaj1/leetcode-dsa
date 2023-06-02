/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void levelOrder(Node *root, int level, vector<int>& ans) {

    if (root == NULL) {
        return;
    }

    if (level == ans.size()) {
        ans.push_back(root->data);
    }

    levelOrder(root->left, level+1, ans);
    levelOrder(root->right, level+1, ans);

}

vector<int> leftView(Node *root) {
    vector<int> ans;
    levelOrder(root, 0, ans);
    return ans;
}

int main() {

    

    return 0;
}