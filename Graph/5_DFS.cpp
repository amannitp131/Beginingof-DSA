#include <bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>>& adj, int u, vector<bool>& visited, vector<int>& result) {
    if (visited[u]) return; // If already visited, return
    
    visited[u] = true;  // Mark as visited
    result.push_back(u); // Store the node
    
    for (int v : adj[u]) { // Traverse all adjacent nodes
        if (!visited[v]) {
            DFS(adj, v, visited, result);
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;
    
    vector<vector<int>> adj(V);
    
    // Input edges
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Assuming an undirected graph
    }
    
    vector<int> result; // Store DFS traversal result
    vector<bool> visited(V, false); // Visited array
    
    DFS(adj, 0, visited, result); // Start DFS from node 0
    
    // Print the DFS traversal result
    for (int node : result) {
        cout << node << " ";
    }
    
    return 0;
}
