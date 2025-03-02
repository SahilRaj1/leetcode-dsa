/* 
 * Author: Sahil Raj
 * Language: C++
 * Problem: Letter Combinations of a Phone Number
 * Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
 * Time Complexity: O()
 * Space Complexity: O()
 * Reference: https://www.youtube.com/watch?v=0snEunUacZY
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {Merge Two 2D Arrays by Summing Values
public:

    map<char, string> hsh = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"},
    };

    void backtrack(string &digits, int i, string &temp, vector<string> &ans) {
        if (i == digits.length()) {
            ans.push_back(temp);
            return;
        }
        
        for (char c: hsh[digits[i]]) {
            temp.push_back(c);
            backtrack(digits, i+1, temp, ans);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits == "") {
            return {};
        }
        vector<string> ans;
        string temp;
        backtrack(digits, 0, temp, ans);
        return ans;
    }
};

int main() {

    

    return 0;
}