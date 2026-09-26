class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int, int> lastSeenMap; 
        // 

        for (int i = 0; i < nums.size(); i++) {
            int currentNum = nums[i]; 

            // if the number is in the map, compare the indices 
            if (lastSeenMap.find(currentNum) != lastSeenMap.end()) {
                if (i - lastSeenMap[currentNum] <= k) {
                    return true; 
                }
            }

            // if the number is not in the map (or not less than equalk)
            lastSeenMap[currentNum] = i; 
        }

        return false;
    } 
};