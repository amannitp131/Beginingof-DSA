#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFS(vector<vector<int>> &adj, int u, vector<bool> &visited, vector<int> &result) {
    queue<int> que;
    que.push(u);
    visited[u] = true; // Mark as visited

    while (!que.empty()) {
        int v = que.front();
        que.pop();
        result.push_back(v); // Store node in BFS result

        for (int neighbor : adj[v]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true; // Mark as visited when adding to queue
                que.push(neighbor);
            }
        }
    }
}

vector<int> bfsOfGraph(vector<vector<int>> &adj) {
    int V = adj.size(); // Get number of vertices
    vector<bool> visited(V, false);
    vector<int> result;
    
    BFS(adj, 0, visited, result); // Start BFS from node 0
    
    return result;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;
    
    vector<vector<int>> adj(V);
    
    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }
    
    vector<int> bfsResult = bfsOfGraph(adj);
    
    cout << "BFS Traversal: ";
    for (int node : bfsResult) {
        cout << node << " ";
    }
    cout << endl;
    
    return 0;
}