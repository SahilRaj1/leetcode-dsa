/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class ListNode {

    public:
    int val;
    ListNode* next;

};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL or head->next == NULL) {
            return head;
        }
    
        ListNode* curr = head;
        ListNode* forward = head->next;
        while (forward) {
            if (curr->val == forward->val) {
                forward = forward->next;
            } else {
                curr->next = forward;
                curr = forward;
            }
        }
        curr->next = forward;

        return head;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}