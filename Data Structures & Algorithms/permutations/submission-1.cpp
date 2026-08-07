class Solution {
public:

    vector<vector<int>> result;
    vector<int> currentBuild;
    vector<int> numbers; 
    unordered_set<int> used; 

    vector<vector<int>> permute(vector<int>& nums) {
        numbers = nums; 
        dfs();
        return result; 
    }


    void dfs() {
        if (currentBuild.size() == numbers.size()) {
            result.push_back(currentBuild); 
            return; 
        }

        for (int number : numbers) {

            if (used.count(number) > 0) {
                continue; 
            }

            // CHOOSE 
            currentBuild.push_back(number); 
            used.insert(number); 

            // EXPLORE 
            dfs(); 

    
            // UNDO 
            currentBuild.pop_back(); 
            used.erase(number);

        }


        
    }
};
