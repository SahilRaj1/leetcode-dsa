/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    void heapify(vector<int> &arr, int i) {
        
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        
        if (left < arr.size() and arr[left] > arr[largest]) {
            largest = left;
        }
        if (right < arr.size() and arr[right] > arr[largest]) {
            largest = right;
        }
        
        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, largest);
        }
        
    }
    
    vector<int> mergeHeaps(vector<int> &arr1, vector<int> &arr2, int n, int m) {
        
        int x = n+m;
        vector<int> ans(x);
        int i = 0, j = 0, k = 0;
        
        // merge arrays
        while (i < n and j < m) {
            if (arr1[i]< arr2[j]) {
                ans[k] = arr1[i];
                i++;
                k++;
            } else {
                ans[k] = arr2[j];
                j++;
                k++;
            }
        }
    
        while (i < n) {
            ans[k] = arr1[i];
            i++;
            k++;
        }
    
        while (j < m) {
            ans[k] = arr2[j];
            j++;
            k++;
        }
        
        // for (int i=0; i<x; i++) {
        //     cout<<ans[i]<<" ";
        // } cout<<endl;
        
        // heapify array
        for (int i=x/2-1; i>=0; i--) {
            heapify(ans, i);
        }
        
        // for (int i=0; i<x; i++) {
        //     cout<<ans[i]<<" ";
        // } cout<<endl;
        
        return ans;
        
    }
};

int main() {

    

    return 0;
}