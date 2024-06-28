 #include <iostream>

// Define the structure for BST nodes
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert nodes in the BST
Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to calculate the sum of leaf nodes
int sumOfLeafNodes(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    if (root->left == nullptr && root->right == nullptr) {
        return root->data;
    }
    return sumOfLeafNodes(root->left) + sumOfLeafNodes(root->right);
}

int main() {
    Node* root = nullptr;
    
    // Insert nodes into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 100);
    insert(root, 20);
    insert(root, 40);
    insert(root, 110);
    
    // Calculate and print the sum of leaf nodes
    std::cout << "The sum of leaf nodes is: " << sumOfLeafNodes(root) << std::endl;
    
    return 0;
}
