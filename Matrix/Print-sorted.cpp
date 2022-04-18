// Print all elements in sorted order from row and column wise sorted matrix
// Difficulty Level : Medium
// Last Updated : 17 Dec, 2021
// Given an n x n matrix, where every row and column is sorted in non-decreasing order. Print all elements of matrix in sorted order.

// Example: 

// Input: mat[][]  =  { {10, 20, 30, 40},
//                      {15, 25, 35, 45},
//                      {27, 29, 37, 48},
//                      {32, 33, 39, 50},
//                    };

// Output:
// Elements of matrix in sorted order
// 10 15 20 25 27 29 30 32 33 35 37 39 40 45 48 50

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
  int k = 0;
  vector<int> v;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      v.push_back(Mat[i][j]);
    }
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      Mat[i][j] = v[k++];
    }
  }

  return Mat;
}

int main() {

  return 0;
}