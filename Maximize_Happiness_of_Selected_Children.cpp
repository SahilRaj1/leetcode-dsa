/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        priority_queue<int> heap;
        for (auto &it: happiness) {
            heap.push(it);
        }

        int temp = k, ct = 0;
        long long ans = 0;
        while (temp) {
            ans += max(heap.top() - ct, 0);
            heap.pop();
            ct++;
            temp--;
        }

        return ans;
    }
};

int main() {

    

    return 0;
}