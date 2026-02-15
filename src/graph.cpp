#include <iostream>
#include <vector>
using namespace std;

// Class for undirected graph
class Graph {
private:
    int vertices;          // Number of vertices
    vector<int> *adj;      // Adjacency list array
public:
    // Constructor
    Graph(int v) {
        vertices = v;
        adj = new vector<int>[v]; // Create array of vectors
    }

    // Add edge between two vertices
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }

    // Display adjacency list
    void display() {
        for(int i=0; i<vertices; i++) {
            cout << "Vertex " << i << ": ";
            for(int x: adj[i]) cout << x << " ";
            cout << endl;
        }
    }
};

int main() {
    Graph g(3);        // Create graph with 3 vertices
    g.addEdge(0,1);    // Add edges
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.display();       // Show adjacency list
}
