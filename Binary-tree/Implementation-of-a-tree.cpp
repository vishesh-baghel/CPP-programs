#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int key;
  Node* left;
  Node* right;

  Node(int x) {
    key = x;
    left = right = NULL;
  }
};



int main() {
  Node* root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);

  return 0;
}