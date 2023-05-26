/* Sahil Raj */

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

void pushAtBottom(stack<int>& myStack, int x) {
    // Write your code here.
    if (myStack.empty()) {
        myStack.push(x);
        return;
    }

    int temp =myStack.top();
    myStack.pop();

    pushAtBottom(myStack, x);

    myStack.push(temp);
    return;
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    if (stack.empty()) {
        return;
    }

    int temp =stack.top();
    stack.pop();

    reverseStack(stack);

    pushAtBottom(stack, temp);
    return;
}

int main() {

    

    return 0;
}