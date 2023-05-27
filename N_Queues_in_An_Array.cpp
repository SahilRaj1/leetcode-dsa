/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class NQueue{

    int n;
    int s;
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freespot;

public:
    // Initialize your data structure.
    NQueue(int n, int s){
        this->n = n;
        this->s = s;
        arr = new int[s];
        front = new int[n];
        rear = new int[n];
        for (int i=0; i<n; i++) {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[s];
        for (int i=0; i<s-1; i++) {
            next[i] = i+1;
        }
        next[s-1] = -1;

        arr = new int[s];
        freespot = 0;
    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m){
        
        if (freespot == -1) {
            return false;
        }

        // 1. find freespot
        int index = freespot;

        // 2. update freespot
        freespot = next[index];

        // 3. check whether first element
        if (front[m-1] == -1) {
            front[m-1] = index;
        } else {
            // link the new element to previous element
            next[rear[m-1]] = index;
        }

        // 4. update next
        next[m-1] = -1;

        // 5. update rear
        rear[m-1] = index;

        // 6. push element
        arr[index] = x;

        return true;

    }

    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m){
        
        // check underflow
        if (front[m-1] == -1) {
            return -1;
        }

        // 1. find index to pop
        int index = front[m-1];

        // 2. store value to pop
        int val = arr[index];

        // 3. front ko aage badhao
        front[m-1] = next[index];

        // 4. update next
        next[index] = freespot;

        // 5. update freespot
        freespot = index;

        return val;

    }
};

int main() {

    

    return 0;
}