class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> seen;

        // Add counts from s
        for (char c : s) {
            seen[c]++;
        }

        // Remove counts using t
        for (char c : t) {
            seen[c]--;
        }

        // Everything should balance back to 0
        for (auto pair : seen) {
            if (pair.second != 0) {
                return false;
            }
        }

        return true;
    }
};