/* Sahil Raj */

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#include <vector>
#include <stack>
#include <queue>

vector<int> firstNegative(vector<int> arr, int n, int k) {
	
	int i=0, j=0, temp;
	queue<int> q;
	vector<int> ans;

	while(j<n) {
		if (j-i<k-1) {
			if (arr[j]<0) {
				q.push(arr[j]);
			}
			j++;
			continue;
		}

		if (arr[j]<0) {
			q.push(arr[j]);
		}

		if (q.empty()) {
			temp = 0;
		} else {
			temp = q.front();
		}

		ans.push_back(temp);

		if (arr[i]<0) {
			q.pop();
		}
		i++;
		j++;
	}

	return ans;

}   

int main() {

    

    return 0;
}