//https://leetcode.com/problems/contains-duplicate-ii/description/



#include <iostream>
#include <vector>
#include <map>  // To use the map

using namespace std;

class Solution {
public:
    // This function checks if there are duplicate values within 'k' indices of each other.
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> mp;  // Map to store value and its most recent index
        for (int i = 0; i < nums.size(); i++) {  // Iterate over the vector
            // If the current number is not found in the map, add it with its index
            if (mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] = i;
            } else {
                // If the number already exists in the map, check the difference in indices
                if (i - mp[nums[i]] <= k) {
                    // If the difference between the indices is <= k, return true
                    return true;
                }
                // Otherwise, update the index of the current number in the map
                mp[nums[i]] = i;
            }
        }
        // If no duplicates are found within the distance 'k', return false
        return false;
    }
};

int main() {
    Solution solution;

    // Example 1: Checking a case where nearby duplicates exist within distance k
    vector<int> nums1 = {1, 2, 3, 1}; 
    int k1 = 3;  
    cout << "Example 1 result: " << (solution.containsNearbyDuplicate(nums1, k1) ? "True" : "False") << endl;
    // Output: True because nums[0] == nums[3] and the distance is 3 <= k1

    // Example 2: Checking a case where there are no nearby duplicates within distance k
    vector<int> nums2 = {1, 2, 3, 1, 2, 3};
    int k2 = 2;  
    cout << "Example 2 result: " << (solution.containsNearbyDuplicate(nums2, k2) ? "True" : "False") << endl;
    // Output: False because no duplicate is found within the distance <= k2

    return 0;
}
