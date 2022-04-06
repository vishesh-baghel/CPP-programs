#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str) {
  stack<char> st;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == '(') st.push(str[i]);
    else {
      if (st.empty()) return 0;
      st.pop();
    }
  }

  if (!st.empty()) return 0;
  return 1;
}

int main() {
  string bracSeq = "(())(())";
  cout << isBalanced(bracSeq);
  return 0;
}