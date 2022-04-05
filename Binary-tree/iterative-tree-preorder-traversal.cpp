#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* root;
  Node* left;
  Node* right;

  Node(int x) {
    data = x;
    left = right = NULL;
  }
};

void iterativePreorder(Node* root) {
  if(root == NULL) return;
  stack<Node*> st;
  Node* curr = root;
  while(curr != NULL or st.empty()==false) {
    while(curr != NULL) {
      cout << curr->data << "";
      if (curr->right != NULL) {st.push(curr->right);}
      curr = curr->left;
    }
    if(st.empty() == false) 
      curr = st.top();
      st.pop();
  }


}


int main() {
  Node* root = new Node(10);

  root->left = new Node(10);
  root->right = new Node(20);
  root->left->left = new Node(30);
  root->left->right = new Node(40);
  root->right->left = new Node(50);
  root->right->right = new Node(60);
  return 0;
}