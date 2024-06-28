#include <iostream>
using namespace std;
struct Node {
  int data;
  Node* next;
};
void insertAtEnd(Node** head_ref, int new_data) {

  Node* new_node = new Node();

  
  new_node->data  = new_data;
  new_node->next = NULL;
  if (*head_ref == NULL) {
     *head_ref = new_node;
     return;
  }
  Node *last = *head_ref;
  while (last->next != NULL)
    last = last->next;
  last->next = new_node;
  return;
}
void deleteLast(Node** head_ref) {
  if (*head_ref == NULL)
    return;

   if ((*head_ref)->next == NULL) {
    delete *head_ref;
    *head_ref = NULL;
    return;
  }
  Node *second_last = *head_ref;
  while (second_last->next->next != NULL)
    second_last = second_last->next;
  delete second_last->next;
  second_last->next = NULL;
  return;
}
 
void printReverse(Node* head) {
  
  if (head == NULL)
    return;
  printReverse(head->next);
 
  cout << head->data << " ";
  return;
}

int main() {
  Node* head = NULL;
  insertAtEnd(&head, 10);
  insertAtEnd(&head, 20);
  insertAtEnd(&head, 30);
  insertAtEnd(&head, 40);
  printReverse(head); 

  return 0;
}
