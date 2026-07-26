class Solution {
public:
    vector<vector<int>> result;
    vector<int> currentBuild;
    vector<int> numbers;
    int targetPublic;

    void dfs(int index, int currentSum) {
        
        // We found a valid combination
        if (currentSum == targetPublic) {
            result.push_back(currentBuild);
            return;
        }

        // Stop if the sum is too large or there are no numbers left
        if (currentSum > targetPublic || index == numbers.size()) {
            return;
        }

        // Choice #1: Take the current number
        currentBuild.push_back(numbers[index]);

        // Move forward because each element can only be used once
        dfs(index + 1, currentSum + numbers[index]);

        // Undo the choice
        currentBuild.pop_back();

        // Choice #2: Skip the current number
        // Skip all duplicate copies so we do not create duplicate combinations
        int nextIndex = index + 1;
        while (nextIndex < numbers.size() && numbers[nextIndex] == numbers[index]) {
            nextIndex++;
        }

        dfs(nextIndex, currentSum);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        numbers = candidates;
        targetPublic = target;

        // Sorting puts duplicate numbers next to each other
        sort(numbers.begin(), numbers.end());

        dfs(0, 0);

        return result;
    }
};