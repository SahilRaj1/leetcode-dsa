/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        int i=0, j=0, ind=-1;
        string temp = "";
        while(j<n) {
            temp.push_back(haystack[j]);
            while(j-i+1<m) {
                j++;
                temp.push_back(haystack[j]);
            }
            if (temp==needle) {
                ind = i;
                break;
            }
            temp.erase(temp.begin());
            i++;
            j++;
        }
        return ind;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}