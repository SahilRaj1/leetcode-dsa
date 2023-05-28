/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

long long sumOfMaxAndMin(vector<int> &nums, int n, int k) {
	long long ans=0, currAns=0;
    deque<int> maxq, minq;
    int i=0, j=0, mx, mn;
    while (j<n) {
 
        while (!maxq.empty() and nums[j] > maxq.front()) {
            maxq.pop_front();
        }
        while (!maxq.empty() and nums[j] > maxq.back()) {
            maxq.pop_back();
        }
        maxq.push_back(nums[j]);
        
        while (!minq.empty() and nums[j] < minq.back()) {
            minq.pop_back();
        }
        while (!minq.empty() and nums[j] < minq.front()) {
            minq.pop_front();
        }
        minq.push_back(nums[j]);

        if (j-i < k-1) {
            j++;
            continue;
        }

        mx = maxq.front();
        mn = minq.front();
        // cout<<"mx = "<<mx<<" mn = "<<mn<<endl;
        currAns = mx + mn + 0LL;
        ans += currAns;

        if (nums[i] == maxq.front()) {
            maxq.pop_front();
        }
        if (nums[i] == minq.front()) {
            minq.pop_front();
        }

        i++;
        j++;

    }

    return ans;
}

int main() {

    

    return 0;
}