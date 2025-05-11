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
    
    int n,m;
    cin>>n>>m;

    int adj_matrix[n+1][m+1]={0};  //adjacency matrix
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj_matrix[u][v]=1;
        adj_matrix[v][u]=1;
    }

    vector<int> adj_list[n+1];  //adjacency list
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
}
