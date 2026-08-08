class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq; 
        // int -> number, value -> number of times it appears 
        int freqTarget = nums.size() / 2;

        for (int num : nums) {
            freq[num]++; 
        }

        for (auto keyVal : freq) {
            if (keyVal.second > freqTarget) {
                return keyVal.first; 
            }
        }

        return 0; 
        
    }
};