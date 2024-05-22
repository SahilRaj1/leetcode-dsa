/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int ans = -1, mx = 0, ct;
	    for (int i=0; i<n; i++) {
	        ct = arr[i].end() - lower_bound(arr[i].begin(), arr[i].end(), 1);
	        if (ct > mx) {
	            mx = ct;
	            ans = i;
	        }
	    }
	    return ans;
	}

};

int main() {

    

    return 0;
}