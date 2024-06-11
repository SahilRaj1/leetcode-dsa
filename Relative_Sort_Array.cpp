/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> hsh(1001, 0);
        for (int &it: arr1) {
            hsh[it]++;
        }
        int i = 0;
        for (int &it: arr2) {
            while (hsh[it] > 0) {
                arr1[i] = it;
                hsh[it]--;
                i++;
            }
        }
        for (int j=0; j<=1000; j++) {
            while (hsh[j] > 0) {
                arr1[i] = j;
                hsh[j]--;
                i++;
            }
        }
        return arr1;
    }
};

int main() {

    

    return 0;
}