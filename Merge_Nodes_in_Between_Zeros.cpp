/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() {
        this->val = 0;
        this->next = NULL;
    }
};

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *ans = new ListNode();
        ListNode *temp = ans;
        int sum = 0;
        while(head) {
            if (head->val == 0) {
                temp->val = sum;
                if (head->next == NULL) {
                    break;
                }
                sum = 0;
                temp->next = new ListNode();
                temp = temp->next;
            } else {
                sum += head->val;
            }
            head = head->next;
        }
        return ans->next;
    }
};

int main() {

    

    return 0;
}