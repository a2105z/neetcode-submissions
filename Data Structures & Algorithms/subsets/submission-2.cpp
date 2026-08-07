class Solution {
public:
    vector<int> currentBuild; 
    vector<vector<int>> result; 
    vector<int> numbers; 

    vector<vector<int>> subsets(vector<int>& nums) {
        numbers = nums; 
        dfs(0); 
        return result;

        
    }

    void dfs(int index) {

        if (index == numbers.size()) {
            result.push_back(currentBuild);
            return; 
        }

        // CHOICE #1
        currentBuild.push_back(numbers[index]); 
        dfs(index + 1); 

        currentBuild.pop_back(); // popping last char to make way for other branmch 

        // CHOICE #2:
        dfs(index + 1); 

    }
};
