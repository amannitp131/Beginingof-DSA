//https://leetcode.com/problems/intersection-of-two-arrays/description/

#include <iostream>
#include <vector>
#include <map>  // For using map

using namespace std;

class Solution {
public:
    // This function returns the intersection of two vectors (i.e., common elements).
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;  // Map to store elements of nums1 and mark visited elements in nums2
        vector<int> ans;   // Vector to store the intersection result

        // Traverse the first vector (nums1) and add elements to the map
        for (int i = 0; i < nums1.size(); i++) {
            // Only insert into map if the element is not already present
            if (mp.find(nums1[i]) == mp.end()) {
                mp[nums1[i]] = 1;  // Mark it with 1 to signify it's from nums1
            }
        }

        // Traverse the second vector (nums2) to check for common elements
        for (int i = 0; i < nums2.size(); i++) {
            // If the element is found in the map and hasn't been added to the result yet
            if (mp.find(nums2[i]) != mp.end() && mp[nums2[i]] != 2) {
                ans.push_back(nums2[i]);  // Add the common element to the result
                mp[nums2[i]] = 2;  // Mark it with 2 to avoid adding the same element again
            }
        }

        // Return the result vector containing the intersection
        return ans;
    }
};

int main() {
    Solution solution;

    // Example 1: Checking intersection of two vectors
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result1 = solution.intersection(nums1, nums2);

    cout << "Example 1 Intersection: ";
    for (int num : result1) {
        cout << num << " ";  // Output: 2
    }
    cout << endl;

    // Example 2: Checking intersection with no common elements
    vector<int> nums3 = {4, 9, 5};
    vector<int> nums4 = {9, 4, 9, 8, 4};
    vector<int> result2 = solution.intersection(nums3, nums4);

    cout << "Example 2 Intersection: ";
    for (int num : result2) {
        cout << num << " ";  // Output: 4 9
    }
    cout << endl;

    return 0;
}
