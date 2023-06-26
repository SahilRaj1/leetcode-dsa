/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {

        int n = costs.size();
        cout<<n<<endl;
        priority_queue<long long, vector<long long>, greater<long long>> heap1, heap2;

        int l = 0, r = n-1, i = 0;
        for (; i<candidates; i++) {
            if (r > l) {
                heap1.push(costs[l]);
                l++;
                heap2.push(costs[r]);
                r--;
            } else {
                break;
            }
        }

        if (i < candidates and l == r) {
            heap2.push(costs[r]);
            r--;
        }
        
        long long ans = 0;
        while (k) {

            if (heap2.empty()) {
                cout<<heap1.top()<<" ";
                ans += heap1.top();
                heap1.pop();
                if (l <= r) {
                    heap1.push(costs[l]);
                    l++;
                }
                k--;
                continue;
            }

            if (heap1.empty()) {
                cout<<heap2.top()<<" ";
                ans += heap2.top();
                heap2.pop();
                if (l <= r) {
                    heap2.push(costs[r]);
                    r--;
                }
                k--;
                continue;
            }

            if (heap1.top() <= heap2.top()) {
                cout<<heap1.top()<<" ";
                ans += heap1.top();
                heap1.pop();
                if (l <= r) {
                    heap1.push(costs[l]);
                    l++;
                }
            } else {
                cout<<heap2.top()<<" ";
                ans += heap2.top();
                heap2.pop();
                if (l <= r) {
                    heap2.push(costs[r]);
                    r--;
                }
            }

            k--;
        }

        return ans;

    }
};

int main() {

    

    return 0;
}