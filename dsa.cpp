 #include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void isertElement(int data)
    {
        Node *new_node = new Node;
        new_node->data = data;
        new_node->next = head;
        head = new_node;
    }

    void display()
    {
        Node *current = head;
        while (current)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }

    void deleteNode(int data)
    {
        Node *current = head;
        Node *prev = NULL;
        while (current != NULL && current->data != data)
        {
            prev = current;
            current = current->next;
        }
        if (current == NULL)
        {
            cout << "Element not found" << endl;
            return;
        }
        if (prev != NULL)
        {
            prev->next = current->next;
        }
        else
        {
            head = current->next;
        }

        delete current;
    }
};

int main()
{
    LinkedList ll;
    int size, data;

    cout << "Enter size of linked list: ";
    cin >> size;

    cout << "Enter numbers : ";
    for (int i = 0; i < size; i++)
    {
        cin >> data;
        ll.isertElement(data);
    }

    cout << "Before deletion: ";
    ll.display();

    int del;
    cout << "Enter integer to delete: ";
    cin >> del;

    ll.deleteNode(del);

    cout << "After deletion: ";
    ll.display();

    return 0;
}