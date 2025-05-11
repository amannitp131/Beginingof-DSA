#include <iostream>
#include <map>
using namespace std;


// map get iterated in sorted order
void solve() {
    map<int, int> mp = {{1, 3}, {4, 2}, {2, 5}};
    for (auto ele : mp) {
        cout << ele.first << endl; 
    }
}

int main() {
    solve();
    return 0;
}