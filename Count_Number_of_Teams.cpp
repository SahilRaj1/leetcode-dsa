/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int ans = 0;
        for (int j = 0; j < n; ++j) {
            int lessBefore = 0, greaterBefore = 0;
            int lessAfter = 0, greaterAfter = 0;
            for (int i = 0; i < j; ++i) {
                if (rating[i] < rating[j]) lessBefore++;
                if (rating[i] > rating[j]) greaterBefore++;
            }
            for (int k = j + 1; k < n; ++k) {
                if (rating[k] < rating[j]) lessAfter++;
                if (rating[k] > rating[j]) greaterAfter++;
            }
            ans += (lessBefore * greaterAfter) + (greaterBefore * lessAfter);
        }
        return ans;
    }
};

int main() {

    

    return 0;
}