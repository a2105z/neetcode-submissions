class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t nCopy = n; 
        int bitCount = 0; 
        while (nCopy != 0) {

            int checkNum = nCopy & 1; 
            if (checkNum == 1) {
                bitCount++; 
            }
            nCopy = nCopy>>1; 

        }

        return bitCount; 
    }
};
