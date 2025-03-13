#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

int main() {
    fast();
    
    int n, m;
    cin >> n >> m;

    vector<int> adj_list[n+1];  // adjacency list
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    vector<int> visit(n+1, 0);
    vector<int> bfs;
    queue<int> q;

    visit[1] = 1;  // Assuming BFS starts from node 1
    q.push(1);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto it : adj_list[node]) {
            if (!visit[it]) {
                visit[it] = 1;
                q.push(it);
            }
        }
    }

    // Output the BFS traversal
    for (int i : bfs) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}