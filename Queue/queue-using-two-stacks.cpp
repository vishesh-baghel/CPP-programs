#include<bits/stdc++.h>
using namespace std;


class myQueue {
  stack<int> s1;
  stack<int> s2;

  void push(int data) {
    s1.push(data);
  }

  int pop() {
    while(!s1.empty()) {
      s2.push(s1.pop());
    }

    int ans = s2.pop();

    while(!s2.empty()) {
      s1.push(s2.pop());
    }
    return ans;
  }
}

int main() {

  return 0;
}