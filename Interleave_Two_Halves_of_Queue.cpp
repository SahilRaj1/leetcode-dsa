/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

void interLeaveQueue(queue < int > & q) {
    queue<int> q2;
    int n = q.size();
    for (int i=0; i<n/2; i++) {
        q2.push(q.front());
        q.pop();
    }

    while(!q2.empty()) {
        q.push(q2.front());
        q2.pop();
        q.push(q.front());
        q.pop();
    }
}

int main() {

    

    return 0;
}