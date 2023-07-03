/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        int n = nums1.size(), m = nums2.size();
        priority_queue<pair<int, pair<int,int>>> heap;
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){

                int temp = nums1[i] + nums2[j];

                if(heap.size() < k) {
                    heap.push({temp, {nums1[i],nums2[j]}});
                } else if(temp < heap.top().first){
                    heap.pop();
                    heap.push({temp, {nums1[i],nums2[j]}});
                } else {
                    break;
                } 
            }
        }

        while(!heap.empty()){
            ans.push_back({heap.top().second.first, heap.top().second.second});
            heap.pop();
        }

        return ans;

    }
};

int main() {

    

    return 0;
}