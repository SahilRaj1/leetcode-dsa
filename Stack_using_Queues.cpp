/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class MyStack {

    queue<int> stack;
    queue<int> temp;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        while (!stack.empty()) {
            temp.push(stack.front());
            stack.pop();
        }
        stack.push(x);
        while (!temp.empty()) {
            stack.push(temp.front());
            temp.pop();
        }
    }
    
    int pop() {
        int val = stack.front();
        stack.pop();
        return val;
    }
    
    int top() {
        return stack.front();
    }
    
    bool empty() {
        return stack.empty();
    }
};

int main() {

    

    return 0;
}