/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> hsh;
        for (auto &it: arr) {
            hsh[it]++;
        }

        vector<int> freq;
        for (auto &it: hsh) {
            freq.push_back(it.second);
        }
        sort(begin(freq), end(freq));

        int ans = freq.size(), temp = k;
        for (auto &it: freq) {
            if (it > temp) {
                break;
            }
            temp -= it;
            ans--;
        }

        return ans;
    }
};

int main() {

    

    return 0;
}