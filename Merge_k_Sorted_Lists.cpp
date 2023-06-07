/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class compare {
public:
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n = lists.size();
        priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;

        for (int i=0; i<n; i++) {
            if (lists[i] != NULL) {
                minHeap.push(lists[i]);
            }
        }

        ListNode* head = NULL;
        ListNode* tail = NULL;

        while (!minHeap.empty()) {
            ListNode* top = minHeap.top();
            minHeap.pop();

            if (top->next != NULL) {
                minHeap.push(top->next);
            }

            if (head == NULL) {
                head = top;
                tail = top;
            } else {
                tail->next = top;
                tail = top;
            }
        }

        return head;

    }
};

int main() {

    

    return 0;
}