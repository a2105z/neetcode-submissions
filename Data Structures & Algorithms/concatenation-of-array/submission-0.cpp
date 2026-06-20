class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result; 
        int n = nums.size(); 

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                result.push_back(nums[j]);
            }
        }

        return result; 
    
        
    }
};