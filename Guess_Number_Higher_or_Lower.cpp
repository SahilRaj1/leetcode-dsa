/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

// dummy function
int guess(int num) {
    return num;
}

class Solution {
public:
    int guessNumber(int n) {

        int lo = 1, hi = n, mid = lo+(hi-lo)/2;
        while(true){
            switch(guess(mid)){
                case -1:
                    hi = mid-1;
                    mid = lo+(hi-lo)/2;
                    break;
                case 1:
                    lo = mid+1;
                    mid = lo+(hi-lo)/2;
                    break;
                case 0:
                    return mid;
            }
        }

        return 0;
    }
};

int main() {

    

    return 0;
}