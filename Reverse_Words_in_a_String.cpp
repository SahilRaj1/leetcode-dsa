/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

void reverseWord(string &s, int start, int end) {
    if (start>=end) return;
    swap(s[start], s[end]);
    reverseWord(s, start+1, end-1);
}

class Solution {
public:
    string reverseWords(string &s) {
        string ans="";
        int n=s.length();
        int start=0, end=0;
        while(end<n) {
            if (start==end) {
                if (s[start]==' ') {
                    start++;
                    end++;
                } else {
                    end++;
                }
                continue;
            }

            if (s[end]==' ') {
                if (s[start]==' ') {
                    start=++end;
                } else {
                    reverseWord(s, start, end-1);
                    start=++end;
                }
                continue;
            }

            if (end==n-1) {
                reverseWord(s, start, end);
                break;
            }

            end++;
        }
        
        stack<char> st;
        for (auto &it: s) {
            if (st.empty()) {
                if (it==' ') continue;
                else st.push(it);
            }
            else if (st.top()==' ' and it==' ') continue;
            else st.push(it);
        }
        s = "";
        while (!st.empty()) {
            if (!s.length() and st.top()==' ') {
                st.pop();
                continue;
            }
            s.push_back(st.top());
            st.pop();
        }    
        return s;
    }
};

int main() {

    

    return 0;
}