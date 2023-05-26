/* Sahil Raj */

#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for (int i=0; i<n/2; i++) {
            char temp=s[i];
            s[i]=s[n-i-1];
            s[n-i-1]=temp;
        }
        
        cout<<"[";
        for (int i=0; i<n; i++) {
            if (i==n-1) cout<<"\""<<s[i]<<"\"";
            else cout<<"\""<<s[i]<<"\",";
        }
        cout<<"]";
    }
};

using namespace std;

int main() {

    

    return 0;
}