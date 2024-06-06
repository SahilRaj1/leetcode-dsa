/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();

        if (n%groupSize) {
            return false;
        }

        sort(hand.begin(), hand.end());
        unordered_map<int, int> hsh;
        for (int &it: hand) {
            hsh[it]++;
        }

        for (int &it: hand) {
            if (hsh[it] == 0) {
                continue;
            }

            for (int i=0; i<groupSize; i++) {
                int temp = it + i;
                if (hsh[temp] == 0) {
                    return false;
                }
                hsh[temp]--;
            }
        }

        return true;
    }
};

int main() {

    

    return 0;
}