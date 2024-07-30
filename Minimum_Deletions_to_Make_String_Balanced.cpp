/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        stack<int> st;
        st.push(s[0]);
        int ans = 0;
        for (int i=1; i<n; i++) {
            if (!st.empty() and (st.top() == 'b' and s[i] == 'a')) {
                st.pop();
                ans++;
            } else {
                st.push(s[i]);
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}