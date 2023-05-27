/* Sahil Raj */

#include <iostream>
#include <vector>

using namespace std;

class NStack {

    int *arr;
    int *top;
    int *next;
    
    int n, s;
    int freespot;

public:

    // Initialize your data structure.
    NStack(int N, int S) {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        freespot = 0;

        for (int i=0; i<s-1; i++) {
            next[i] = i+1;
        }
        next[s-1] = -1;
        for (int i=0; i<n; i++) {
            top[i] = -1;
        }
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m) {

        // overflfow check
        if  (freespot == -1) {
            return false;
        }
        
        // 1. find free spot
        int index = freespot;

        // 2. update freespot
        freespot = next[index];

        // 3. insert element in array
        arr[index] = x;

        // 4. update next
        next[index] = top[m-1];

        // 5. update top
        top[m-1] = index;

        return true;

    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m) {
        
        // underflow check
        if (top[m-1] == -1) {
            return -1;
        }

        // 1. get top
        int index = top[m-1];

        // 2. update top
        top[m-1] = next[index];

        // 3. storing value
        int x = arr[index];

        // 4. update next
        next[index] = freespot;

        // 5. update freespot
        freespot = index;

        return x;

    }

};

int main() {

    

    return 0;
}