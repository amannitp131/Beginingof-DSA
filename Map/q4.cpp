//https://leetcode.com/problems/first-unique-character-in-a-string/


#include <iostream>
#include <map>    // For using map
#include <string> // For using string

using namespace std;

class Solution {
public:
    // This function returns the index of the first non-repeating character in the string
    int firstUniqChar(string s) {
        map<char, int> mp;  // Map to store the frequency of each character
        int ans;

        // Step 1: Traverse the string and count the frequency of each character
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;  // Increment the count of the character in the map
        }

        // Step 2: Traverse the string again to find the first character with frequency 1
        for (int i = 0; i < s.length(); i++) {
            if (mp[s[i]] == 1) {  // If the character appears only once
                return i;  // Return the index of the first unique character
            }
        }

        // If no unique character is found, return -1
        return -1;
    }
};

int main() {
    Solution solution;

    // Example 1: String with a unique character at the beginning
    string s1 = "leetcode";
    int result1 = solution.firstUniqChar(s1);
    cout << "Example 1 - Index of first unique character: " << result1 << endl;
    // Output: 0 ('l' is the first unique character)

    // Example 2: String with a unique character not at the beginning
    string s2 = "loveleetcode";
    int result2 = solution.firstUniqChar(s2);
    cout << "Example 2 - Index of first unique character: " << result2 << endl;
    // Output: 2 ('v' is the first unique character)

    // Example 3: String with no unique characters
    string s3 = "aabb";
    int result3 = solution.firstUniqChar(s3);
    cout << "Example 3 - Index of first unique character: " << result3 << endl;
    // Output: -1 (no unique character)

    return 0;
}
