/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSizeSlices(vector<int>& slices) {

        int n = slices.size();

        vector<int> prev1(n/3+2, 0);
        vector<int> curr1(n/3+2, 0);
        vector<int> next1(n/3+2, 0);
        
        vector<int> prev2(n/3+2, 0);
        vector<int> curr2(n/3+2, 0);
        vector<int> next2(n/3+2, 0);
        
        for (int i=n-2; i>=0; i--) {
            for (int k=1; k<=n/3; k++) {

                int take = slices[i] + next1[k-1];
                int ntake = 0 + curr1[k];
                prev1[k] = max(take, ntake);

            }
            next1 = curr1;
            curr1 = prev1;
        }

        for (int i=n-1; i>=1; i--) {
            for (int k=1; k<=n/3; k++) {

                int take = slices[i] + next2[k-1];
                int ntake = 0 + curr2[k];
                prev2[k] = max(take, ntake);
                
            }
            next2 = curr2;
            curr2 = prev2;
        }

        return max(prev1[n/3], prev2[n/3]);

    }
};

int main() {

    

    return 0;
}