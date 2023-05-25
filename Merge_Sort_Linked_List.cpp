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

    void insertAtTail(ListNode* &head, ListNode* &tail, int value) {
        ListNode* temp = new ListNode(value);
        if (head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }

    ListNode* findMid(ListNode* &head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != NULL and fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* &left, ListNode* &right) {
        if (left == NULL) {
            return right;
        }
        if (right == NULL) {
            return left;
        }
        
        // ListNode* mergedHead = NULL;
        // ListNode* mergedTail = NULL;
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;
        ListNode* leftCurr = left;
        ListNode* rightCurr = right;
        while (leftCurr != NULL and rightCurr != NULL) {
            if (leftCurr->val < rightCurr->val) {
                // insertAtTail(mergedHead, mergedTail, leftCurr->val);
                temp->next = leftCurr;
                temp = leftCurr;
                leftCurr = leftCurr->next;
            } else {
                // insertAtTail(mergedHead, mergedTail, rightCurr->val);
                temp->next = rightCurr;
                temp = rightCurr;
                rightCurr = rightCurr->next;
            }
        }

        while (leftCurr != NULL) {
            // insertAtTail(mergedHead, mergedTail, leftCurr->val);
            temp->next = leftCurr;
            temp = leftCurr;
            leftCurr = leftCurr->next;
        }

        while (rightCurr != NULL) {
            // insertAtTail(mergedHead, mergedTail, rightCurr->val);
            temp->next = rightCurr;
            temp = rightCurr;
            rightCurr = rightCurr->next;
        }

        ans = ans->next;
        return ans;
    }

    ListNode* sortList(ListNode* &head) {
        
        // base case
        if (head == NULL or head->next == NULL) {
            return head;
        }

        ListNode* mid = findMid(head);

        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;

        left = sortList(left);
        right = sortList(right);

        ListNode* result = merge(left, right);

        return result;

    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}