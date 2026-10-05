class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> hashSet; 
        int leftPtr = 0; int maxLen = 0; 

        for (int rightPtr = 0; rightPtr < s.length(); rightPtr++) {
            while(hashSet.count(s[rightPtr]) > 0) {
                hashSet.erase(s[leftPtr]); 
                leftPtr++; 
            }

            // if there are no repeats or after readjustments are done
            hashSet.insert(s[rightPtr]); 
            maxLen = max(maxLen, rightPtr - leftPtr + 1); 
        }
        return maxLen; 
    }
};
