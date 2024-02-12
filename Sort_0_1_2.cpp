/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

void sort012(int *arr, int n) {
   int i=0, j=0, k=n-1;
   while (i<n) {
      if (arr[i] == 0) {
         swap(arr[i], arr[j]);
         j++;
      }
      i++;
   }
   i = n-1;
   while (i>=0) {
      if (arr[i] == 2) {
         swap(arr[i], arr[k]);
         k--;
      }
      i--;
   }
}

int main() {

    

    return 0;
}