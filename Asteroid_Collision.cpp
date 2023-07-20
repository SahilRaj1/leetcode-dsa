/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        
        int n = arr.size();
        stack<int> st;

        for (int i=0; i<n; i++) {
            if (st.empty() or arr[i] > 0) {
                st.push(arr[i]);
            } else {
                while (!st.empty() and st.top() > 0 and st.top() < abs(arr[i])) {
                    st.pop();
                }

                if (!st.empty() and st.top() == abs(arr[i])) {
                    st.pop();
                } else {
                    if (st.empty() or st.top() < 0) {
                        st.push(arr[i]);
                    }
                }
            }
        }

        vector<int> ans(st.size());
        for (int i=st.size()-1; i>=0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;

    }
};

int main() {

    

    return 0;
}