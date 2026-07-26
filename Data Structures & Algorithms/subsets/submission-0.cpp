class Solution {
public:
    vector<vector<int>> result;
    vector<int> currentBuild; 
    vector<int> numbers;

    void dfs(int index) {

        if (index == numbers.size()) {
            result.push_back(currentBuild); 
            return; 
        }

        // Choice #1: Do Not Include This Number (SKIP)
        dfs(index + 1); 

        // Choice #2: Add This Number
        currentBuild.push_back(numbers[index]); 
        dfs(index + 1); 

        // -> Undo the current choice 
        currentBuild.pop_back(); 

    } 

    vector<vector<int>> subsets(vector<int>& nums) {
        numbers = nums; 
        dfs(0);
        return result; 
    }


};
