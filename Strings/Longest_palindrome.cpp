#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int count[128] = {0}; 
        int ans = 0;
        for (char c : s) {
            count[c]++;
            if (count[c] == 2) {
                ans += 2;
                count[c] = 0;
            }
        }
        if (ans < s.length()) {
            return ans + 1;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string s = "abccccdd";
    int result = solution.longestPalindrome(s);
    cout << "The longest palindrome that can be built is of length: " << result << endl;
    return 0;
}
