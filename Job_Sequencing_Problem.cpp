/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

struct Job { 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

class Solution {
public:
    static bool comparator(const Job &a, const Job &b) {
        return a.profit > b.profit;
    }
    
    vector<int> JobScheduling(Job arr[], int n) {
        int lastDay = 1;
        for (int i=0; i<n; i++) {
            lastDay = max(lastDay, arr[i].dead);
        }
        vector<bool> days(lastDay+1, false);
        sort(arr, arr+n, comparator);
        int t = 0, ans = 0;
        for (int i=0; i<n; i++) {
            for (int j=arr[i].dead; j>0; j--) {
                if (!days[j]) {
                    t++;
                    days[j] = true;
                    ans += arr[i].profit;
                    break;
                }
            }
        }
        return {t, ans};
    } 
};

int main() {

    

    return 0;
}