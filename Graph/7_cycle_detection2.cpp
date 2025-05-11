#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
public:
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list

    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // Since it's an undirected graph
    }

    bool BFS(int start, vector<bool>& visited) {
        queue<pair<int, int>> que;
        que.push({start, -1});
        visited[start] = true;

        while (!que.empty()) {
            int node = que.front().first;
            int parent = que.front().second;
            que.pop();

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    que.push({neighbor, node});
                } else if (neighbor != parent) {
                    return true; // Cycle detected
                }
            }
        }
        return false;
    }

    bool hasCycle() {
        vector<bool> visited(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i]) { // Check each component
                if (BFS(i, visited)) {
                    return true; // Cycle found
                }
            }
        }
        return false; // No cycle
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 1); // This edge creates a cycle

    if (g.hasCycle()) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle in the graph." << endl;
    }

    return 0;
}
