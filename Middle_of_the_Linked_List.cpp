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
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode *slow=head, *fast=head;
        while (fast!=NULL and fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}