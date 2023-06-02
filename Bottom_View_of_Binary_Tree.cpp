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
  public:
    vector <int> bottomView(Node *root) {
        
        vector<int> ans;
        if (root == NULL) {
            return ans;
        }

        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});

        while (!q.empty()) {

            auto temp = q.front();
            q.pop();

            Node* node = temp.first;
            int hd = temp.second;
            mp[hd] = node->data;

            if (node->left) {
                q.push({node->left, hd-1});
            }
            if (node->right) {
                q.push({node->right, hd+1});
            }

        }
        
        for (auto &it: mp) {
            ans.push_back(it.second);
        }

        return ans;

    }
};

int main() {

    

    return 0;
}