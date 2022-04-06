#include<bits/stdc++.h>
using namespace std;

int evaluatePostfix(string str) {
  stack<int> st;

  for (int i = 0; i < str.length(); i++) {
    if (isdigit(str[i])) {
      st.push(str[i] - '0');
    } else {
      int val1 = st.top();
      st.pop();
      int val2 = st.top();
      st.pop();

      char op = str[i];

      switch(op) {
        case '+':
          st.push(val1 + val2);
        case '-':
          st.push(val2 - val1);
        case '*':
          st.push(val2 * val1);
        case '/':
          st.push(val2 / val1);
      }
    }
  }
  return st.top();
}

int main() {
  string str = "231*+9-";
  cout << evaluatePostfix(str) << endl;
  return 0;
}