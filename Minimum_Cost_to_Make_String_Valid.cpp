/* Sahil Raj */

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int findMinimumCost(string str) {
  // Write your code here

  if (str.length() & 1) {
    return -1;
  }

  stack<int> st;
  for (char &it: str) {
    if (it == '{') {
      st.push(it);
    } else {
      if (!st.empty() and st.top() == '{') {
        st.pop();
      } else {
        st.push(it);
      }
    }
  }

  int a = 0, b = 0;
  while (!st.empty()) {
    if (st.top()=='{') {
      a++;
    } else {
      b++;
    }
    st.pop();
  }

  int ans = (a+1)/2 + (b+1)/2;
  return ans;

}

int main() {

    

    return 0;
}