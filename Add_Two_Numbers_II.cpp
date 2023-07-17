/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:

    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }

};

class Solution {
public:

    ListNode* reverse(ListNode* &head) {
        if (head == NULL or head->next == NULL) {
            return head;
        }
        ListNode *temp = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return temp;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        l1 = reverse(l1);
        l2 = reverse(l2);

        int carry = 0;
        ListNode *temp1 = l1, *temp2 = l2, *ans = NULL, *temp3 = NULL;
        while (temp1 and temp2) {
            int res = temp1->val + temp2->val + carry;
            int digit = res % 10;
            carry = res / 10;
            ListNode* temp = new ListNode(digit);
            if (ans == NULL) {
                ans = temp;
                temp3 = ans;
            } else {
                temp3->next = temp;
                temp3 = temp3->next;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while (temp1) {
            int res = temp1->val + carry;
            int digit = res % 10;
            carry = res / 10;
            ListNode* temp = new ListNode(digit);
            if (ans == NULL) {
                ans = temp;
                temp3 = ans;
            } else {
                temp3->next = temp;
                temp3 = temp3->next;
            }
            temp1 = temp1->next;
        }

        while (temp2) {
            int res = temp2->val + carry;
            int digit = res % 10;
            carry = res / 10;
            ListNode* temp = new ListNode(digit);
            if (ans == NULL) {
                ans = temp;
                temp3 = ans;
            } else {
                temp3->next = temp;
                temp3 = temp3->next;
            }
            temp2 = temp2->next;
        }

        if (carry > 0) {
            ListNode* temp = new ListNode(carry);
            if (ans == NULL) {
                ans = temp;
                temp3 = ans;
            } else {
                temp3->next = temp;
                temp3 = temp3->next;
            }
        }

        ans = reverse(ans);

        return ans;

    }
};

int main() {

    

    return 0;
}