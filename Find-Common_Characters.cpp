/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> count(string &s) {
        vector<int> frequency(26, 0);
        for (char &it: s) {
            frequency[it-'a']++;
        }
        return frequency;
    }

    vector<int> intersection(const vector<int> &a, const vector<int> &b) {
        vector<int> result(26, 0);
        for (int i=0; i<26; i++) {
            result[i] = min(a[i], b[i]);
        }
        return result;
    }

public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<int> last = count(words[0]);
        for (int i=1; i<n; i++) {
            last = intersection(last, count(words[i]));
        }

        vector<string> ans;
        for (int i=0; i<26; i++) {
            while (last[i] > 0) {
                ans.push_back(string(1, 'a' + i));
                last[i]--;
            }
        }
        
        return ans;
    }
};

int main() {

    

    return 0;
}