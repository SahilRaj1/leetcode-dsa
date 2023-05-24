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

    int times = 0;

    int length(ListNode* &head) {
        ListNode* temp = head;
        int ct = 0;
        while (temp) {
            temp = temp->next;
            ct++;
        }
        return ct;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        // base case
        if (head == NULL) {
            return NULL;
        }

        if ((length(head)-times*k)<k) {
            return head;
        }

        // remove k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        int ct = 0;

        while (curr != NULL and ct < k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            ct++;
        }

        // recursion call
        if (forward != NULL) {
            head->next = reverseKGroup(forward, k);
            times++;
        }

        // return head of linked list
        return prev;

    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}