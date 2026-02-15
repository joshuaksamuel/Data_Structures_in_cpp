#include <iostream>
using namespace std;

// Node structure for binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Class for Binary Tree
class BinaryTree {
private:
    Node* root;

    // Helper function for inorder traversal
    void inorder(Node* node) {
        if(!node) return;          // Base case: null node
        inorder(node->left);       // Visit left subtree
        cout << node->data << " "; // Visit root
        inorder(node->right);      // Visit right subtree
    }

public:
    BinaryTree() { root = nullptr; } // Initialize empty tree

    // Function to create a new node
    Node* createNode(int value) {
        return new Node{value, nullptr, nullptr};
    }

    // Set root node
    void setRoot(Node* node) { root = node; }

    // Display tree using inorder traversal
    void displayInorder() {
        cout << "Inorder Traversal: ";
        inorder(root);
        cout << endl;
    }
};

int main() {
    BinaryTree tree;
    Node* root = tree.createNode(10);
    root->left = tree.createNode(5);
    root->right = tree.createNode(20);
    tree.setRoot(root);
    tree.displayInorder();
}
