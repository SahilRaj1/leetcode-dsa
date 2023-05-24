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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    // floyd cycle detection
    ListNode* floydCycleDetect(ListNode* &head) {

        if (head == NULL) {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast!=NULL and fast->next!=NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast) {
                return slow;
            }
        }

        return NULL;
    }

    // find starting node of the cycle
    ListNode* startOfCycle(ListNode* &head) {

        ListNode* intersection = floydCycleDetect(head);
        if (intersection == NULL) {
            return NULL;
        }

        ListNode* slow = head;
        while (slow != intersection) {
            slow = slow->next;
            intersection = intersection->next;
        }

        return slow;
    }

    ListNode *detectCycle(ListNode *head) {
        return startOfCycle(head);
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}