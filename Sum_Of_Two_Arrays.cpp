/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

vector<int> solve(vector<int>&a, vector<int>&b) {
	int n = a.size(), m = b.size();
	vector<int> ans;
	int i=n-1, j=m-1, carry=0, temp;
	while (i>=0 and j>=0) {
		temp = a[i] + b[j] + carry;
		ans.push_back(temp%10);
		carry = temp/10;
		i--;
		j--;
	}
	while (i>=0) {
		temp = a[i] + carry;
		ans.push_back(temp%10);
		carry = temp/10;
		i--;
	}
	if (carry != 0) {
		ans.push_back(carry);
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	if (n>m) {
		return solve(a, b);
	}
	return solve(b, a);
}

int main() {

	

    return 0;
}