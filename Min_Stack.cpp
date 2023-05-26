/* Sahil Raj */

#include <bits/stdc++.h>

using namespace std;

class MinStack {
public:

    stack<int> st;
    int mini;

    MinStack() {
        
    }
    
    void push(int val) {
        if (st.empty()) {
            st.push(val);
            mini = val;
            return;
        }

        if (val < mini) {
            st.push(2*val-mini);
            mini = val;
        } else {
            st.push(val);
        }
    }
    
    void pop() {
        if (st.empty()) {
            return;
        }
        
        if (st.top() < mini) {
            int prevMini = mini;
            int val = 2*mini - st.top();
            mini = val;
        }
        st.pop();
    }
    
    int top() {
        if (st.empty()) {
            return -1;
        }
        return st.top();
    }
    
    int getMin() {
        if (st.empty()) {
            return -1;
        }
        return mini;
    }
};

int main() {

    

    return 0;
}