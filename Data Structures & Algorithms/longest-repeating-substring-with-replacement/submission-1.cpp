class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freqMap; 
        int leftPtr = 0; int longestLen = 0; int maxFreq = 0; 

        for (int i = 0; i < s.length(); i++) {
            freqMap[s[i]]++; 
            maxFreq = max(maxFreq, freqMap[s[i]]); 

            // window length - maximum charatcer frequendcy 
            while ((i - leftPtr + 1) - maxFreq > k) {
                freqMap[s[leftPtr]]--;
                leftPtr++;
            }

            longestLen = max(longestLen, i - leftPtr + 1); 
        }

        return longestLen; 
        
    }
};
