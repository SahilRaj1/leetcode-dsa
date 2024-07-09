/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        long totalTime = customers[0][1], currTime = customers[0][0] + customers[0][1];
        cout<<currTime<<" "<<totalTime<<endl;
        for (int i=1; i<n; i++) {
            if (currTime >= customers[i][0]) {
                currTime += customers[i][1];
                totalTime += currTime - customers[i][0];
            } else {
                totalTime += customers[i][1];
                currTime = customers[i][0] + customers[i][1];
            }
        }
        return totalTime / double(n);
    }
};

int main() {

    

    return 0;
}