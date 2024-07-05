/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> criticalPoints;
        ListNode *prev = head, *curr = head->next;
        int i = 2, n = 0;
        while (curr->next) {
            bool maxima = (curr->val > curr->next->val) and (curr->val > prev->val);
            bool minima = (curr->val < curr->next->val) and (curr->val < prev->val);
            if (maxima or minima) {
                criticalPoints.push_back(i);
                n++;
            }
            i++;
            prev = prev->next;
            curr = curr->next;
        }
        if (n < 2) {
            return {-1, -1};
        }
        int mx = criticalPoints[n-1] - criticalPoints[0], mn = INT_MAX;
        for (int i=1; i<n; i++) {
            mn = min(mn, criticalPoints[i] - criticalPoints[i-1]);
        }
        return {mn, mx};
    }
};

int main() {

    

    return 0;
}