/* Sahil Raj */

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

stack<int> pushAtBottom(stack<int>& myStack, int x) {
    // Write your code here.
    if (myStack.empty()) {
        myStack.push(x);
        return myStack;
    }

    int temp =myStack.top();
    myStack.pop();

    myStack = pushAtBottom(myStack, x);

    myStack.push(temp);
    return myStack;
}

int main() {

    

    return 0;
}