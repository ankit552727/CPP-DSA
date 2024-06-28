#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;};
int main() {
     
    Node* head = new Node();
    head->data = 5;
    head->next = NULL;

    Node* current = head;
    current->next = new Node();
    current = current->next;
    current->data = 10;
    current->next = new Node();

    current = current->next;

    current->data = 15;
    current->next = new Node(); 
    current = current->next;
    current->data = 20;
    current->next = NULL;
 
    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next; 
        
    }
    cout << endl;

    return 0;
}