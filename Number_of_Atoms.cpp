/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countOfAtoms(string formula) {
        stack<unordered_map<string, int>> st;
        st.push({});
        int n = formula.length(), i = 0;

        while (i < n) {
            if (formula[i] == '(') {
                st.push({});
                i++;
            } else if (formula[i] == ')') {
                unordered_map<string, int> top = st.top();
                st.pop();
                i++;
                int j = i;
                while (i < n and isdigit(formula[i])) {
                    i++;
                }
                int mul = j < i ? stoi(formula.substr(j, i - j)) : 1;
                for (auto& kv : top) {
                    st.top()[kv.first] += kv.second * mul;
                }
            } else {
                int j = i++;
                while (i < n && islower(formula[i])) {
                    i++;
                }
                string element = formula.substr(j, i - j);
                j = i;
                while (i < n && isdigit(formula[i])) {
                    i++;
                }
                int ct = j < i ? stoi(formula.substr(j, i - j)) : 1;
                st.top()[element] += ct;
            }
        }

        unordered_map<string, int> ansult = st.top();
        vector<string> elements;
        for (auto& kv : ansult) {
            elements.push_back(kv.first);
        }
        sort(elements.begin(), elements.end());
        
        string ans;
        for (auto &element : elements) {
            ans += element;
            if (ansult[element] > 1) {
                ans += to_string(ansult[element]);
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}