#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertices = 3;
    vector<int> adj[3];

    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(0);

    for(int i = 0; i < vertices; i++) {
        cout << "Vertex " << i << ": ";
        for(int x : adj[i]) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
