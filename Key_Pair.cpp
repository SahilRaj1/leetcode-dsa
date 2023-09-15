/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_map<int, int> hsh;
	    for (int i=0; i<n; i++) {
	        if (hsh[x-arr[i]] > 0) {
	            return true;
	        }
	        hsh[arr[i]]++;
	    }
	    return false;
	}
};

int main() {

    

    return 0;
}