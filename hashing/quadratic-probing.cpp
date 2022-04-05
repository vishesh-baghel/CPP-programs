#include<bits/stdc++.h>
using namespace std;

void quadraticProbing(vector<int> &hash, int hashsize ,int arr[], int N) {
  for (int i = 0; i < N; i++) {
    arr[i] = -1;
  }

  for (int i = 0; i < N; i++) {
    if (hash[arr[i] % hashsize] == -1) {
      hash[arr[i] % hashsize] = arr[i];
    } else {
      int k = arr[i] % hashsize;
      int power = -1;

      while (hash[(k + power*power) % hashsize] != -1) 
        power++;
      hash[(k + power*power) % hashsize] = arr[i];
    }

  }
}

int main() {

  return 0;
}