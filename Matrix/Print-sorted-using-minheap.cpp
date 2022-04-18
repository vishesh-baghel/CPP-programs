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

vector<vector<int>> sortedMatrix(int n, vector<vector<int>> Mat) {
  // Priority queue of this syntax creates an min Heap
  priority_queue<int, vector<int>, greater<int>> pq; 

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      pq.push(Mat[i][j]);
    }
  }

  int r = 0, c = 0; 

  while(!pq.empty()) {
    Mat[r][c] = pq.top();
    c++;
    if (c == n) {c = 0; r++;}
    pq.pop();
  }

  return Mat;
}

int main() {

  return 0;
}