#include<bits/stdc++.h>
using namespace std;

class base {
  public:
  void whoami() {
    cout << "I am base";
  }
};

class derived: public base {
  public:
  void whoami() {
    cout << "I am derived";
  }
};

int main() {
  base *b_ptr = new derived;
  // derived *d_ptr = new base; doesn't work

  b_ptr->whoami();
  return 0;
}
