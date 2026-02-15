#include <iostream>
using namespace std;

// Class to represent a Queue (FIFO)
class Queue {
private:
    int arr[100]; // Array to store elements
    int front, rear; // Front and rear indexes
public:
    // Constructor initializes empty queue
    Queue() { front = rear = -1; }

    // Add element to queue
    void enqueue(int value) {
        if(rear >= 99) cout << "Queue Full\n"; // Check if full
        else {
            if(front == -1) front = 0;         // First element
            arr[++rear] = value;               // Add element at rear
        }
    }

    // Remove element from queue
    void dequeue() {
        if(front == -1 || front > rear) cout << "Queue Empty\n"; // Check if empty
        else front++;  // Move front pointer forward
    }

    // Display elements of queue
    void display() {
        cout << "Queue: ";
        if(front != -1)
            for(int i=front; i<=rear; i++)
                cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display(); // Show queue
    q.dequeue(); // Remove front element
    q.display(); // Show queue after dequeue
}
