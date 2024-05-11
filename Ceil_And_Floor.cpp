/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
	pair<int, int> ans = {-1, -1};
	int lo = 0, hi = n-1, mid;
	while (lo <= hi) {
		mid = lo + (hi-lo)/2;
		if (arr[mid] > x) {
			ans.second = arr[mid];
			hi = mid - 1;
		} else if (arr[mid] < x) {
			ans.first = arr[mid];
			lo = mid + 1;
		} else {
			ans.first = arr[mid];
			ans.second = arr[mid];
			break;
		}
	}
	return ans;
}

int main() {

    

    return 0;
}