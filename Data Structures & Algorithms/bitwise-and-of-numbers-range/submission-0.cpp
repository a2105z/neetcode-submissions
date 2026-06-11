class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int outputNum = left; 
        for (int i = left + 1; i <= right; i++) {
            outputNum = outputNum & i; 
        }

        return outputNum; 
        
    }
};