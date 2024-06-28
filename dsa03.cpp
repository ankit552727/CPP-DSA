 #include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    private:
        Node* top;

    public:
        Stack() : top(NULL) {}

        bool is_empty() {
            return top == NULL;
        }

        void push(int data) {
            Node* new_node = new Node;
            new_node->data = data;
            new_node->next = top;
            top = new_node;
        }

        int pop() {
            if (is_empty()) {
                return -1; // Return a special value indicating that the stack is empty
            }

            int popped_data = top->data;
            Node* temp = top;
            top = top->next;
            delete temp;
            return popped_data;
        }

        void display() {
            Node* current = top;
            while (current != NULL) {
                cout << current->data << endl;
                current = current->next;
            }
        }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    int popped = s.pop();
    if (popped != -1) {
        cout << "Popped: " << popped << endl;
    } else {
        cout << "Stack is empty" << endl;
    }
    s.display();
    return 0;
}