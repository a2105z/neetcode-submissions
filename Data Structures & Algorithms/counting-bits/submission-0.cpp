class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        result.push_back(0); 

        for (int i = 1; i <= n; i++) {
            int halfIndex = i / 2; 
            int totalOnes = result[halfIndex] + i % 2; 
            result.push_back(totalOnes); 
        }


        return result; 
        
    }
};
