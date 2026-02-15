#include <iostream>
using namespace std;

// Structure for a single node
struct Node {
    int data;      // Data stored in node
    Node* next;    // Pointer to next node
};

// Class for singly linked list
class LinkedList {
private:
    Node* head;    // Pointer to first node
public:
    LinkedList() { head = nullptr; } // Initialize empty list

    // Function to insert node at end
    void insert(int value) {
        Node* newNode = new Node{value, nullptr}; // Create new node
        if(!head) head = newNode;                // If list empty, head = new node
        else {
            Node* temp = head;
            while(temp->next) temp = temp->next; // Traverse to last node
            temp->next = newNode;               // Link new node
        }
    }

    // Function to display all nodes
    void display() {
        Node* temp = head;
        cout << "Linked List: ";
        while(temp) {
            cout << temp->data << " ";          // Print data
            temp = temp->next;                  // Move to next node
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display(); // Show linked list
}
