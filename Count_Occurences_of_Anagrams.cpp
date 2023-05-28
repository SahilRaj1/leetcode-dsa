/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    int n = txt.size(), k = pat.size();
	    
	    unordered_map<char, int> m;
	    for (char &it: pat) {
	        m[it]++;
	    }
	    
	    int ct=m.size(), i=0, j=0, ans=0;
	    while (j<n) {
	       if (m.find(txt[j]) != m.end()) {
	           m[txt[j]]--;
	           if (m[txt[j]] == 0) {
	               ct--;
	           }
	       }
	       if (j-i < k-1) {
	           j++;
	           continue;
	       }
	       if (ct == 0) {
	           ans++;
	       }
	       if (m.find(txt[i]) != m.end()) {
	           m[txt[i]]++;
	           if (m[txt[i]] == 1) {
	               ct++;
	           }
	       }
	       i++;
	       j++;
	    }
	    
	    return ans;
	}

};

int main() {

    

    return 0;
}