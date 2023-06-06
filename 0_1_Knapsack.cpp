/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)  {

	vector<int> prev(maxWeight+1, 0);
	vector<int> curr(maxWeight+1, 0);

	// base case
	for (int w = weight[0]; w <= maxWeight; w++) {
		if (weight[0] <= maxWeight) {
			prev[w] = value[0];
		} else {
			prev[w] = 0;
		}
	}

	// filling dp
	for (int i=1; i<n; i++) {
		for (int w = 0; w <= maxWeight; w++) {
			
			int ntake = 0 + prev[w];
			int take = 0;
			if (weight[i] <= w) {
				take = value[i] + prev[w - weight[i]];
			}

			curr[w] = max(take, ntake);

		}
		prev = curr;
	}

	// return ans
	return prev[maxWeight];
	
}

int main() {

    

    return 0;
}