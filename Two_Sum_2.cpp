/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0, j = n-1;
        while (i<j) {
            if (numbers[i] + numbers[j] > target) {
                j--;
            }
            else if (numbers[i] + numbers[j] < target) {
                i++;
            }
            else {
                return {i+1, j+1};
            }
        }
        return {-1, -1};
    }
};

int main() {

    

    return 0;
}