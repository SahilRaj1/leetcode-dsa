/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		string FirstNonRepeating(string A){
		    
		    unordered_map<char, int> ct;
		    queue<char> q;
		    string ans;
		    
		    for (char &it: A) {
		        ct[it]++;
		        q.push(it);
		        while(!q.empty()) {
		            if (ct[q.front()] > 1) {
		                q.pop();
		            } else {
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if (q.empty()) {
		            ans.push_back('#');
		        }
		    }
		    
		    return ans;
		    
		}

};

int main() {

    

    return 0;
}