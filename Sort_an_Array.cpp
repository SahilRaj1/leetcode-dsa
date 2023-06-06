/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void heapify(vector<int> &arr, int n, int i) {

        // left and right index of element
        int largest = i;
        int left = i * 2 + 1;
        int right = i * 2 + 2;

        // check whether element is in it's correct position
        if (left < arr.size() and left <= n and arr[largest] < arr[left]) {
            largest = left;
        }
        if (right < arr.size() and right <= n and arr[largest] < arr[right]) {
            largest = right;
        }

        // if position changes then call heapify recursively
        if (largest != i) {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }

    }

    void heapSort(vector<int> &arr, int n) {

        int size = n;
        while (size > 0) {
            swap(arr[0], arr[size]);
            // cout<<"after swapping: ";
            // for (int i=0; i<arr.size(); i++) {
            //     cout<<arr[i]<<" ";
            // } cout<<endl;
            size--;
            heapify(arr, size, 0);
        //     cout<<"after heapify: ";
        //     for (int i=0; i<arr.size(); i++) {
        //         cout<<arr[i]<<" ";
        //     } cout<<endl<<endl;
        }

    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i=n/2-1; i>=0; i--) {
            heapify(nums, n, i);
        }

        for (int i=0; i<n; i++) {
            cout<<nums[i]<<" ";
        } cout<<endl;

        heapSort(nums, n-1);
        return nums;
    }
};

int main() {

    

    return 0;
}