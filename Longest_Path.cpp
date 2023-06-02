/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) 
    {
        data = val;
        left = right = NULL;
    }
};

void solve(Node *root, int sum, int height, vector<pair<int,int>> &arr) {

    // base case
    if (root == NULL) {
        return;
    }

    // condition for leaf node
    if (root->left == NULL and root->right == NULL) {
        sum += root->data;
        arr.push_back({height+1, sum});
        return;
    }

    // left
    if (root->left) {
        solve(root->left, sum+root->data, height+1, arr);
    }

    // right
    if (root->right) {
        solve(root->right, sum+root->data, height+1, arr);
    }

}

int longestPath(Node *root) {
    
    if (root == NULL) {
        return 0;
    }

    vector<pair<int,int>> arr;
    solve(root, 0, 0, arr);
    sort(arr.begin(), arr.end());
    int n = arr.size();
    return arr[n-1].second;

}

int main() {

    

    return 0;
}