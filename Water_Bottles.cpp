/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while (numBottles) {
            int exchangedBottles = numBottles / numExchange;
            int leftBottles = 0;
            if (exchangedBottles) {
                leftBottles = numBottles % numExchange;
            }
            cout<< exchangedBottles << " " << leftBottles << endl;
            ans += exchangedBottles;
            numBottles = exchangedBottles + leftBottles;
        }
        return ans;
    }
};

int main() {

    

    return 0;
}