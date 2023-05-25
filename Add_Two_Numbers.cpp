/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class ListNode {

    public:
    int val;
    ListNode* next;

    ListNode (int val) {
        this->val = val;
        this->next = NULL;
    }

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

    void insertAtTail(ListNode* &head, ListNode* &tail, int digit) {
        ListNode* temp = new ListNode(digit);

        if (head == NULL) {
            head = temp;
            tail = temp;
            return;
        }

        tail->next = temp;
        tail = temp;
        return;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        while (temp1 != NULL and temp2 != NULL) {
            int sum = temp1->val + temp2->val + carry;
            int digit = sum%10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while (temp1 != NULL) {
            int sum = temp1->val + carry;
            int digit = sum%10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            temp1 = temp1->next;
        }

        while (temp2 != NULL) {
            int sum = temp2->val + carry;
            int digit = sum%10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            temp2 = temp2->next;
        }

        if (carry != 0) {
            insertAtTail(ansHead, ansTail, carry);
            carry = 0;
        }

        return ansHead;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}