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
                cout << "Stack is empty" << endl;
                return -1;
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
    cout << "Popped: " << s.pop() << endl;
    s.display();
    return 0;
}