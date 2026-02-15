#include <iostream>
using namespace std;

// Class to represent a Stack (LIFO)
class Stack {
private:
    int arr[100]; // Array to store stack elements
    int top;      // Index of top element
public:
    // Constructor initializes top as -1 (empty stack)
    Stack() { top = -1; }

    // Function to push element to stack
    void push(int value) {
        if(top >= 99) cout << "Stack Overflow\n"; // Check if full
        else arr[++top] = value;                  // Add element and update top
    }

    // Function to pop element from stack
    void pop() {
        if(top < 0) cout << "Stack Underflow\n"; // Check if empty
        else top--;                               // Remove top element
    }

    // Function to display stack elements
    void display() {
        cout << "Stack: ";
        for(int i=0; i<=top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();   // Show current stack
    s.pop();       // Remove top element
    s.display();   // Show stack after pop
}
