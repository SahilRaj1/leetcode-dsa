/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        int i=n-2, j=n-1;
        for (i; i>=0; i--) {
            if (arr[i]<arr[i+1]) break;
        }

        if (i<0) {
            reverse(arr.begin(), arr.end());
            return;
        }

        for (j; j>=0; j--) {
            if (arr[j]>arr[i]) break;
        }
        swap(arr[i], arr[j]);
        reverse(arr.begin()+i+1, arr.end());
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}