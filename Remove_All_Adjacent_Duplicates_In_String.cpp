/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        stack<char> st;
        for (char &it: s) {
            if (st.empty()) {
                st.push(it);
            } else {
                if (st.top() == it) {
                    st.pop();
                } else {
                    st.push(it);
                }
            }
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {

    

    return 0;
}