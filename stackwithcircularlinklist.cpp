#include <iostream>

using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;


public:
    CircularLinkedList() {
        head = nullptr;
    }
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            newNode->next = newNode;
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }
    void display() {
        if (head == nullptr) {
            cout << "Circular Linked List is empty." << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    // Function to delete a node with a given value from the circular linked list
    void deleteNode(int value) {
        if (head == nullptr)
            return;

        Node* temp = head;
        Node* prev = nullptr;

        // If the node to be deleted is the head node
        if (temp->data == value) {
            Node* last = head;
            while (last->next != head)
                last = last->next;
            if (head == head->next) {
                delete head;
                head = nullptr;
            } else {
                last->next = head->next;
                delete head;
                head = last->next;
            }
        } else {
            // If the node to be deleted is not the head node
            while (temp->data != value) {
                if (temp->next == head) {
                    cout << "Node with value " << value << " not found." << endl;
                    return;
                }
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }
    }
};

// Main function
int main() {
    CircularLinkedList clist;

    clist.insertAtBeginning(1);
    clist.insertAtBeginning(2);
    clist.insertAtBeginning(3);
    clist.insertAtBeginning(4);

    cout << "Circular Linked List: ";
    clist.display();

    clist.deleteNode(3);

    cout << "Circular Linked List after deleting node with value 3: ";
    clist.display();

    return 0;
}
