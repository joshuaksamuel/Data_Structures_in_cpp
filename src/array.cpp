#include <iostream>
using namespace std;

// Class to represent an array
class Array {
private:
    int arr[100];   // Fixed-size array
    int size;       // Maximum size
    int length;     // Current number of elements
public:
    // Constructor to initialize array size and length
    Array(int s) {
        size = s;
        length = 0;
    }

    // Function to insert a new value into the array
    void insert(int value) {
        if(length < size) {          // Check if array has space
            arr[length++] = value;   // Add value and increase length
        } else {
            cout << "Array is full\n";
        }
    }

    // Function to display all elements of the array
    void display() {
        cout << "Array elements: ";
        for(int i = 0; i < length; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Array a(5);      // Create array of size 5
    a.insert(10);    // Insert elements
    a.insert(20);
    a.insert(30);
    a.display();     // Display elements
}
