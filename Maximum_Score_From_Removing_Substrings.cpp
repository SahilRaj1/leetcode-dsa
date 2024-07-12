/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int ans = 0;
        string top, bot;
        int top_score, bot_score;
        if (y > x) {
            top = "ba";
            top_score = y;
            bot = "ab";
            bot_score = x;
        } else {
            top = "ab";
            top_score = x;
            bot = "ba";
            bot_score = y;
        }
        vector<char> st;
        for (char ch : s) {  // Changed 'char' to 'ch'
            if (ch == top[1] && !st.empty() && st.back() == top[0]) {
                ans += top_score;
                st.pop_back();
            } else {
                st.push_back(ch);
            }
        }
        vector<char> st2;
        for (char ch : st) {
            if (ch == bot[1] && !st2.empty() && st2.back() == bot[0]) {
                ans += bot_score;
                st2.pop_back();
            } else {
                st2.push_back(ch);
            }
        }
        return ans;
    }
};

int main() {

    

    return 0;
}