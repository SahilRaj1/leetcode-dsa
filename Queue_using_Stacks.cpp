/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

int main() {

    class MyQueue {

    stack<int> queue;
    stack<int> temp;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while (!queue.empty()) {
            temp.push(queue.top());
            queue.pop();
        }
        queue.push(x);
        while (!temp.empty()) {
            queue.push(temp.top());
            temp.pop();
        }
    }
    
    int pop() {
        int val = queue.top();
        queue.pop();
        return val;
    }
    
    int peek() {
        return queue.top();
    }
    
    bool empty() {
        return queue.empty();
    }
};

    return 0;
}