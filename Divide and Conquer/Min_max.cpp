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

    // Finded min max using divide and conquer
    // T(n)=2(T(n/2))+2


pair<int, int> Divide(vector<int>& arr, int low, int high) {
    if (low == high) {
        return {arr[low], arr[low]};
    }
    if (high - low == 1) {
        return {min(arr[low], arr[high]), max(arr[low], arr[high])};
    }
    
    int mid = (low + high) / 2;
    pair<int, int> left = Divide(arr, low, mid);
    pair<int, int> right = Divide(arr, mid + 1, high);

    return {min(left.first, right.first), max(left.second, right.second)};
}

int main() {
    fast();
    vector<int> arr = {3, 5, 1, 8, 2, 7, 6, 4};
    pair<int, int> result = Divide(arr, 0, arr.size() - 1);
    cout << "Minimum: " << result.first << ", Maximum: " << result.second << endl;
    return 0;
}