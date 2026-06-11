class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int xorNumList = 0; 
        for (int i = 0; i < nums.size(); i++) {
            xorNumList = xorNumList ^ nums[i]; 
        }

        int xorNumOrig = 0; 
        int size = nums.size(); 
        for (int i = 0; i <= size; i++) {
            xorNumOrig = xorNumOrig ^ i;  
        }

        return xorNumList ^ xorNumOrig; 
        
    }
};
