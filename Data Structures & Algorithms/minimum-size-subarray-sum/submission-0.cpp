class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0; int sum = 0; 
        int minLength = INT_MAX; 

        for (int right = 0; right < nums.size(); right++) {
            sum = sum + nums[right]; 

            while (sum >= target) {
                minLength = min(minLength, right - left + 1);
                sum = sum - nums[left]; 
                left = left + 1; 
            }
        }

        if (minLength == INT_MAX) return 0; 
        return minLength; 
    }
};