#include<bits/stdc++.h>
using namespace std;

void mySort(int arr[], int n) {
  priority_queue<int> pq(arr, arr + n);
  for (int i = n - 1; i >= 0; i--) {
    arr[i] = pq.top();
    pq.pop();
  }
}

int main() {
  int arr[] = {1, 23, 4};
  mySort(arr, 3);
  return 0;
}