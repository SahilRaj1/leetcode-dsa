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

    // create node to parent mapping and return target
    Node* nodeToParentMap (Node* root, map<Node*, Node*> &parent, int target) {

        Node* res = NULL;
        queue<Node*> q;
        q.push(root);
        parent[root] = NULL;

        while (!q.empty()) {
            Node* temp = q.front();
            q.pop();

            if (temp->data == target) {
                res = temp;
            }

            // left
            if (temp->left) {
                parent[temp->left] = temp;
                q.push(temp->left);
            }

            // right
            if (temp->right) {
                parent[temp->right] = temp;
                q.push(temp->right);
            }
        }

        return res;

    }

    int burnTree(Node* root, map<Node*, Node*> parent) {

        map<Node*, bool> visited;
        queue<Node*> q;
        q.push(root);
        visited[root] = true;

        int ans = 0;

        while (!q.empty()) {
            
            int n = q.size();
            bool flag = false;
            for (int i=0; i<n; i++) {
                // process neighbouring nodes
                Node* node = q.front();
                q.pop();

                // left node
                if (node->left and !visited[node->left]) {
                    q.push(node->left);
                    visited[node->left] = true;
                    flag = true;
                }

                // right node
                if (node->right and !visited[node->right]) {
                    q.push(node->right);
                    visited[node->right] = true;
                    flag = true;
                }

                // parent node
                if (parent[node] and !visited[parent[node]]) {
                    q.push(parent[node]);
                    visited[parent[node]] = true;
                    flag = true;
                }
                
            }
            
            if (flag) {
                ans++;
            }
        }
        
        return ans;

    }

    int minTime(Node* root, int target)  {
        
        // ALGORITHM :-
        // 1. create node to parent mapping
        // 2. find target node
        // 3. burn the tree in min time

        map<Node*, Node*> parent;
        Node* targetNode = nodeToParentMap(root, parent, target);
        int ans = burnTree(targetNode, parent);
        return ans;
        
    }
};

int main() {

    

    return 0;
}