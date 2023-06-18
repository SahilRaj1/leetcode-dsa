/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {

        int n = satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end());

        vector<int> curr(n+2, 0);
        vector<int> next(n+2, 0);
        
        for (int i=n-1; i>=0; i--) {
            for (int time=n; time>0; time--) {
                
                int take = (satisfaction[i] * time) + next[time+1];
                int ntake = 0 + next[time];

                curr[time] = max(take, ntake);

            }
            next = curr;
        }

        return curr[1];

    }
};

int main() {

    

    return 0;
}