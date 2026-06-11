class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; 
        // Key is the actual number and value is the index 

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; 

            if (seen.count(complement) > 0) {
                return {seen[complement], i}; 
            }
            
            seen[nums[i]] = i;
        }

        return {}; 

        
    }
};
