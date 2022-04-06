#include<bits/stdc++.h>
using namespace std;

void reverse(string str) {
  stack<char> st;

  for (int i = 0; i < str.length(); i++) {
    st.push(str[i]);
  }

  while(!st.empty()) {
    cout << st.top();
    st.pop();
  }
}

int main() {
  string str = "GeeksQuiz";
    reverse(str);
  
  return 0;
}