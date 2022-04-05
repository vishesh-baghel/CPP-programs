#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node* deleteHead(Node* head) {
  if (head == NULL) return;
  if (head->next == head) return NULL;

  Node* curr = head;
  while(curr->next != head) {
    curr = curr->next;
  }

  Node* temp = head;
  head = head->next;
  temp->next = NULL;
  delete temp;
  curr->next = head;

  return head;
}

int main() {

  return 0;
}