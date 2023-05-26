/* Sahil Raj */

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        if (s.length() == 0) {
            return 0;
        }

        stack<int> st;
        for (char &it: s) {
            if (it == '(') {
                st.push(it);
            } else {
                if (!st.empty() and st.top() == '(') {
                st.pop();
                } else {
                st.push(it);
                }
            }
        }

        int a = 0, b = 0;
        while (!st.empty()) {
            if (st.top()=='(') {
                a++;
            } else {
                b++;
            }
            st.pop();
        }

        int ans = a+b;
        return ans;
    }
};

int main() {

    

    return 0;
}