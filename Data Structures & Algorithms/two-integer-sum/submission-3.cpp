class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; 
        // Key is the actual number and value is the index 

        // Populating the Hash Map 
        for (int i = 0; i < nums.size(); i++) {
            seen[nums[i]] = i; 
        }


        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Find the number we need in the target

            if (seen.count(complement) > 0 && seen[complement] != i) {
                return {i, seen[complement]}; 
            }
        }

        return {}; 
        
    }
};
