#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str) {
  stack<int> st;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == '(' or str[i] == '{' or str[i] == '[') {
      st.push(str[i]);
    } else {
      if (st.empty() == true) return false;
      else if (st.find(str[i])) return false;
      else st.pop();
    }
  }
  return (st.empty() == true);
}

int main() {

  return 0;
}