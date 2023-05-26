/* Sahil Raj */

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto &it: s) {
            if (it=='(' or it=='{' or it=='[') {
                st.push(it);
            } else {
                if (it==')') {
                    if (!st.empty() and st.top()=='(') {
                        st.pop();
                    } else {
                        return false;
                    }
                } else if (it=='}') {
                    if (!st.empty() and st.top()=='{') {
                        st.pop();
                    } else {
                        return false;
                    }
                } else if (it==']') {
                    if (!st.empty() and st.top()=='[') {
                        st.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};

int main() {

    

    return 0;
}