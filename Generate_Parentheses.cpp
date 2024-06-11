/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(int n, int left, int right, vector<string> &ans, string temp) {
        if(temp.length() == n*2) {
            ans.push_back(temp);
            return;
        }

        if (left < n) {
            temp.push_back('(');
            solve(n, left+1, right, ans, temp);
            temp.pop_back();
        }

        if (right < left) {
            temp.push_back(')');
            solve(n, left, right+1, ans, temp);
            temp.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(n, 0, 0, ans, "");
        return ans;
    }
};

int main() {

    

    return 0;
}