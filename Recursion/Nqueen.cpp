// https://leetcode.com/problems/n-queens/description/

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

    
    bool isSafe(int row, int col, vector<string>& board, int n) {
        for (int i = col - 1; i >= 0; i--)
            if (board[row][i] == 'Q')
                return false;
 
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q')
                return false;
    
        for (int i = row + 1, j = col - 1; i < n && j >= 0; i++, j--)
            if (board[i][j] == 'Q')
                return false;
    
        return true;
    }

void solve(int col,vector<string>& cell,vector<vector<string>>& ans,int n){
    if(col==n){
        ans.push_back(cell);
        return;
    }
    for(int row=0;row<n;row++){
        if(isSafe(row,col,cell,n)){
             cell[row][col]='Q';
             solve(col+1,cell,ans,n);
             cell[row][col]='.';
        }
    }

}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> cell(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            cell[i]=s;
        }
        solve(0,cell,ans,n);
        return ans;
    }


int main() {
    fast();
    int n;
    cin>>n;
    vector<vector<string>> solutions = solveNQueens(n);
    for (const auto& solution : solutions) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
}
