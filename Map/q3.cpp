//https://leetcode.com/problems/intersection-of-two-arrays-ii/description/


#include <iostream>
#include <vector>
#include <map>  // For using map

using namespace std;

class Solution {
public:
    // This function returns the intersection of two vectors (i.e., elements common to both, considering duplicates).
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;  // Map to store the count of elements in nums1
        vector<int> ans;   // Vector to store the intersection result

        // Count the frequency of each element in nums1
        for (int i = 0; i < nums1.size(); i++) {
            mp[nums1[i]]++;  // Increment the count of each element in the map
        }

        // Traverse the second vector (nums2) to find common elements
        for (int i = 0; i < nums2.size(); i++) {
            // If the current element exists in the map and its count is greater than 0
            if (mp[nums2[i]] > 0) {
                ans.push_back(nums2[i]);  // Add the common element to the result
                mp[nums2[i]]--;  // Decrement the count of the element in the map
            }
        }

        // Return the result vector containing the intersection, considering duplicates
        return ans;
    }
};

int main() {
    Solution solution;

    // Example 1: Checking intersection with duplicate values
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result1 = solution.intersect(nums1, nums2);

    cout << "Example 1 Intersection: ";
    for (int num : result1) {
        cout << num << " ";  // Output: 2 2
    }
    cout << endl;

    // Example 2: Checking intersection with unique values and no duplicates
    vector<int> nums3 = {4, 9, 5};
    vector<int> nums4 = {9, 4, 9, 8, 4};
    vector<int> result2 = solution.intersect(nums3, nums4);

    cout << "Example 2 Intersection: ";
    for (int num : result2) {
        cout << num << " ";  // Output: 4 9
    }
    cout << endl;

    return 0;
}
