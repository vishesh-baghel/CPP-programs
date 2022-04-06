#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void fillCharCounts(string str, int count) {
  for (int i = 0; i < str.length(); i++) {
    v[str[i]]++;
  }
}

void printDupes(string str) {
  for (int i = 0; i < v.size(); i++)
    if (v[i] > 1) cout << i << " ";
}

int main() {

  return 0;
}