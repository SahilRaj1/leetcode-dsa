/* Sahil Raj */

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
    public:
    int celebrity(vector<vector<int> >& M, int n) {
        stack<int> st;
        for (int i=0; i<n; i++) {
            st.push(i);
        }
        while (st.size()>1) {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            
            if (M[a][b] == 1) {
                st.push(b);
            } else {
                st.push(a);
            }
        }
        int ans = st.top();
        
        for (int i=0; i<n; i++) {
            if (i!=ans and M[ans][i]==1) {
                ans = -1;
                break;
            }
            if (i!= ans and M[i][ans]==0) {
                ans = -1;
                break;
            }
        }
        
        return ans;
    }
};

int main() {

    

    return 0;
}