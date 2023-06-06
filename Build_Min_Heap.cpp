/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int i) {

    int smallest = i;
    int left = i * 2 + 1;
    int right = i * 2 + 2;

    if (left < arr.size() and arr[left] < arr[smallest]) {
        smallest = left;
    }
    if (right < arr.size() and arr[right] < arr[smallest]) {
        smallest = right;
    }

    if (smallest != i) {
        swap(arr[smallest], arr[i]);
        heapify(arr, smallest);
    }

}

vector<int> buildMinHeap(vector<int> &arr) {
    int n = arr.size();
    for (int i=n/2-1; i>=0; i--) {
        heapify(arr, i);
    }
    return arr;
}

int main() {

    

    return 0;
}