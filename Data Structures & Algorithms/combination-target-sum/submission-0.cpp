class Solution {
public:

    vector<vector<int>> result; 
    vector<int> currentBuild; 
    vector<int> numbers; 
    int targetPublic; 

    void dfs(int index, int currentSum) {
        if (currentSum == targetPublic) {
            result.push_back(currentBuild);
            return; 
        }

        // Stop if the sum is too large or the index gets too long 
        if (currentSum > targetPublic || index == numbers.size()) {
            return; 
        }

        // Choice #1: Take the current number
        currentBuild.push_back(numbers[index]);

        // We can keep in the same index 
        dfs(index, currentSum + numbers[index]); 

        // Undo the change
        currentBuild.pop_back(); 

        // Choice #2: Skip the Current Number
        dfs(index + 1, currentSum); 

    }
// [2, 5, 6, 9]
// [2, 2, 2, 2, 2]




    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        numbers = nums; 
        targetPublic = target; 
        dfs(0, 0); 

        return result; 
        
    }
};
