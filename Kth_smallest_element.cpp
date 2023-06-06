/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    
    priority_queue<int> h;
    for (int i=l; i<=r; i++) {
        if (i<k) {
            h.push(arr[i]);
            continue;
        }
        if (arr[i] < h.top()) {
            h.pop();
            h.push(arr[i]);
        }
    }
    
    return h.top();
    
}

int main() {

    

    return 0;
}