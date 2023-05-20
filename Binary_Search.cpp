/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int lo=0, hi=arr.size()-1;
        int mid;
        while (hi-lo>1) {
            mid = (hi+lo)/2;
            if (arr[mid]<target) lo=mid+1;
            else hi=mid;
        }
        if (arr[lo]==target) return lo;
        else if (arr[hi]==target) return hi;
        else return -1;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    return 0;
}