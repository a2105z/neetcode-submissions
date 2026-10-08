class Solution {
public:
    vector<vector<int>> result; vector<int> current;

    void backtrack(vector<int> &nums, int start) {
        result.push_back(current); 

        for (int i = start; i < nums.size(); i++) {
            current.push_back(nums[i]); // CHOOSE
            backtrack(nums, i + 1); // EXPLORE
            current.pop_back(); // UNDO
        }
    } 

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums, 0); 
        return result; 
    }
};
