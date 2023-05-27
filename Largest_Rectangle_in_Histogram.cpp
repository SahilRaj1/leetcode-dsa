/* Sahil Raj */

#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>

using namespace std;

class Solution {
public:

    vector<int> nextSmallerElement(vector<int> &arr, int n) {
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
        for (int i=n-1; i>=0; i--) {
            while(st.top() != -1 and arr[st.top()] >= arr[i]) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int> &arr, int n) {
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
        for (int i=0; i<n; i++) {
            while(st.top() != -1 and arr[st.top()] >= arr[i]) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = prevSmallerElement(heights, n);

        int area = INT_MIN;
        for (int i=0; i<n; i++) {
            if (next[i] == -1) {
                next[i] = n;
            }
            int l = heights[i];
            int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(area, newArea);
        }

        return area;
    }
};

int main() {

    

    return 0;
}