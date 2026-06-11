class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t nCopy = n; 
        uint32_t result = 0;
        int counter = 0; 

        while (counter != 32) {
            result = result * 2; 
            uint32_t lastBit = nCopy & 1; 
            result = result + lastBit; 
            nCopy = nCopy >> 1; 
            counter = counter + 1; 
        } 

        return result; 
        
    }
};
