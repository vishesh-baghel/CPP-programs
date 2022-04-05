
#include<bits/stdc++.h>
using namespace std;

int chocolate(int arr[], int n, int m) {
  int min_diff = INT_MAX;
  if (n == 0 or m == 0) return 0;
  if (n < m) return 0;

  for (int i = 0; i + m -1; i++) {
    int diff = arr[i + m - 1] - arr[i];
    if (diff < min_diff) {
      min_diff = diff;
    }
  } 
}

int main() {
  int arr[] = {2, 5, 7, 3, 1};
  return 0;
}