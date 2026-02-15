#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    return new Node{value, nullptr, nullptr};
}

void inorder(Node* root) {
    if(root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);

    inorder(root);
    return 0;
}
