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

    void solve(ListNode* &first, ListNode* &second) {
        ListNode* prev1 = first;
        ListNode* curr1 = prev1->next;
        ListNode* prev2 = second;
        ListNode* curr2 = prev2->next;

        while (curr1 != NULL) {
            if (curr2 == NULL) {
                if (prev2->val < curr1->val) {
                    prev1->next = prev2;
                    prev2->next = curr1;
                    return;
                } else {
                    prev1 = prev1->next;
                    curr1 = curr1->next;
                    continue;
                }
            }
            if (prev1->val <= prev2->val and curr1->val >= prev2->val) {
                prev1->next = prev2;
                prev2->next = curr1;
                prev2 = curr2;
                prev1 = prev1->next;
                curr2 = prev2->next;
            } else {
                prev1 = prev1->next;
                curr1 = curr1->next;
                if (curr1 == NULL) {
                    prev1->next = prev2;
                    return;
                }
            }
        }
        if (curr1 == NULL) {
            prev1->next = prev2;
            return;
        }
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }

        if (list1->val <= list2->val) {
            solve(list1, list2);
            return list1;
        } else {
            solve(list2, list1);
            return list2;
        }
        return NULL;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}