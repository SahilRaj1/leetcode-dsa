/* Sahil Raj */

#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> hsh;
        stack<int> st;
        for (int i=0; i<nums2.size(); i++) {
            if (st.empty()) {
                st.push(nums2[i]);
            } else {
                while (!st.empty() and nums2[i]>st.top()) {
                    hsh[st.top()] = nums2[i];
                    st.pop();
                }
                st.push(nums2[i]);
            }
        }
        while (!st.empty()) {
            hsh[st.top()] = -1;
            st.pop();
        }

        vector<int> ans;
        for (auto &it: nums1) {
            ans.push_back(hsh[it]);
        }

        return ans;
    }
};

int main() {

    

    return 0;
}