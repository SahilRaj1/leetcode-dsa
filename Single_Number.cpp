/* Sahil Raj */
// 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for (auto &it: nums) ans=ans^it;
        return ans;
    }
};

int main() {

    

    return 0;
}