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

    void reverse(ListNode* &head, ListNode* &curr, ListNode* &prev) {
        if (curr == NULL) {
            head = prev;
            return;
        }
        ListNode* forward = curr->next;
        reverse(head, forward, curr);
        curr->next = prev;
    }

    ListNode* reverseList(ListNode* head) {

        if (head == NULL or head->next == NULL) {
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        reverse(head, curr, prev);
        return head;


        // ListNode* prev = NULL;
        // ListNode* curr = head;
        // ListNode* forward = NULL;

        // while (curr) {
        //     forward = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = forward;
        // }

        // return prev;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}