#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        // Count occurrences
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        } 
        
        // Check for duplicates
        for (int i = 0; i < n; i++) {
            if (mp[nums[i]] > 1) return true;
        }

        return false;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 1}; // Example input
    Solution obj;
    
    if (obj.containsDuplicate(nums)) {
        cout << "Contains duplicate\n";
    } else {
        cout << "No duplicates found\n";
    }
    
    return 0;
}
