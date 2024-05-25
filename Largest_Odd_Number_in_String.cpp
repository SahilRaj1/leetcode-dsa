/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        while (n and (num[n-1] - '0')%2 == 0) {
            num.pop_back();
            n--;
        }
        return num;
    }
};

int main() {

    

    return 0;
}