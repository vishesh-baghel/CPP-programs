#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* next;
  Node* prev;
  Node(int x) {
    data = x;
    next = NULL;
    prev = NULL;
  }
};

Node* insertAtEndDouble(Node* head, int k) {
  Node* temp = new Node(k);
  if (head == NULL) return temp;

  Node* curr = head;
  while(curr->next != NULL) {
    curr = curr->next;
  }

  curr->next = temp;
  temp->prev = curr;
  temp->next = NULL;

  return head;
}

void printList(Node* head) {
  Node* curr = head;
  while(curr != NULL) {
    cout << curr->data << " ";
    curr = curr->next;
  }
}

int main() {
  Node* head = new Node(10);
  Node* temp1 = new Node(20);
  Node* temp2 = new Node(30);

  head->next = temp1;
  temp1->prev = head;
  temp1->next = temp2;
  temp2->prev = temp1;

  head = insertAtEndDouble(head, 40);
  printList(head);
  return 0;
}