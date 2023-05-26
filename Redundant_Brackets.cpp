/* Sahil Raj */

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

bool findRedundantBrackets(string &s) {
    // Write your code here.
    stack<char> st;
    for (char &it: s) {
        if (it=='(' or it=='+' or it=='-' or it=='*' or it=='/') {
            st.push(it);
        } else if (it==')') {
            bool redundant = true;
            while (st.top() != '(') {
                if (st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/') {
                    redundant = false;
                    st.pop();
                }
            }
            if (redundant) {
                return redundant;
            }
            st.pop();
        }
    }
    return false;
}

int main() {

    

    return 0;
}