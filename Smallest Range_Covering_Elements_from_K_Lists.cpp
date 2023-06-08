/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    int row;
    int col;

    node(int data, int i, int j) {
        this->data = data;
        this->row = i;
        this->col = j;
    }
};

class compare {
public:
    bool operator() (node* a, node* b) {
        return a->data > b->data;
    }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {

        int n = nums.size();
        priority_queue<node*, vector<node*>, compare> minHeap;
        int mini = INT_MAX, maxi = INT_MIN;

        for (int i=0; i<n; i++) {
            int element = nums[i][0];
            maxi = max(maxi, element);
            mini = min(mini, element);
            node* temp = new node(element, i, 0);
            minHeap.push(temp);
        }

        int start = mini, end = maxi;
        while (!minHeap.empty()) {
            node* top = minHeap.top();
            minHeap.pop();

            mini = top->data;
            if (maxi-mini < end-start) {
                start = mini;
                end = maxi;
            }

            if (top->col + 1 < nums[top->row].size()) {
                maxi = max(maxi, nums[top->row][top->col+1]);
                minHeap.push(new node(nums[top->row][top->col+1], top->row, top->col+1));
            } else {
                break;
            }
        }

        return {start, end};

    }
};

int main() {

    

    return 0;
}