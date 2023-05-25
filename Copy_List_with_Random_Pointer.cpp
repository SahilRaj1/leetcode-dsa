/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:

    void insertAtTail(Node* &head, Node* &tail, int value) {
        Node* temp = new Node(value);

        if (head == NULL) {
            head = temp;
            tail = temp;
            return;
        }

        tail->next = temp;
        tail = tail->next;
        return;
    }

    Node* copyRandomList(Node* head) {
        
        // make a copy of the list
        Node* copyHead = NULL;
        Node* copyTail = NULL;

        Node* temp = head;
        while (temp) {
            insertAtTail(copyHead, copyTail, temp->val);
            temp = temp->next;
        }

        // placing copied nodes between orignal nodes
        Node* originalNode = head;
        Node* copyNode = copyHead;

        while (originalNode != NULL and copyNode != NULL) {
            Node* nextNode = originalNode->next;
            originalNode->next = copyNode;
            originalNode = nextNode;
            nextNode = copyNode->next;
            copyNode->next = originalNode;
            copyNode = nextNode;
        }

        // random pointer copy
        temp = head;

        while (temp) {
            if (temp->random != NULL) {
                temp->next->random = temp->random->next;
            } else {
                temp->next->random = NULL;  
            }
            temp = temp->next->next;
        }

        // revert to original linked list and copied list
        originalNode = head;
        copyNode = copyHead;
        
        while (originalNode != NULL and copyNode != NULL) {
            originalNode->next = copyNode->next;
            originalNode = originalNode->next;
            if (originalNode != NULL) {
                copyNode->next = originalNode->next;
            }
            copyNode = copyNode->next;
        }

        return copyHead;

    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}