/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPlatform(int arr[], int dep[], int n) {
    	sort(arr, arr + n);
    	sort(dep, dep + n);
    	int i = 0, j = 0, ct = 0, ans = 0;
    	while(i < n) {
    	    if (arr[i] <= dep[j]) {
    	        ct++;
    	        i++;
    	    } else {
    	        ct--;
    	        j++;
    	    }
	        ans = max(ans, ct);
    	}
    	return ans;
    }
};

int main() {

    

    return 0;
}