/* Sahil Raj */

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

void insertSorted(stack<int> &stack, int x) {
	if (stack.empty()) {
		stack.push(x);
		return;
	}
	if (stack.top()<=x) {
		stack.push(x);
		return;
	}

	int temp = stack.top();
	stack.pop();

	insertSorted(stack, x);
	
	stack.push(temp);
	
	return;
}

void sortStack(stack<int> &stack) {
	// Write your code here
	if (stack.empty()) {
		return;
	}

	int temp = stack.top();
	stack.pop();

	sortStack(stack);

	insertSorted(stack, temp);

	return;
}

int main() {

    

    return 0;
}