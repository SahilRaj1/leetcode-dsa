/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();

        if (n==1) return;

        // all zeros sort
        int i=0, j=1;
        while (j<n)  {
            if (arr[j]==0) {
                swap(arr[i], arr[j]);
                i++;
                j=i+1;
            }
            else j++;
        }
        
        // all twos sort
        int p=n-1, q=n-2;
        while (q>=0) {
            if (arr[q]==2) {
                swap(arr[p], arr[q]);
                p--;
                q=p-1;
            }
            else q--;
        }

    }
};

int main() {

    

    return 0;
}