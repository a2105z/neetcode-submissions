#include <unordered_set>

class Solution {
public:

    bool isHappy(int n) {
        std::unordered_set<int> seenNumbers;

        if (n == 1) {
            return true;
        }

        while (true) {
            int current = sumOfSquaredDigits(n); 
            if (current == 1) {
                return true; 
            } else {
                if (seenNumbers.count(current)) {
                    return false;
                }
                seenNumbers.insert(current);
                n = current;
            }
        }
        
    }

    int sumOfSquaredDigits(int number) {
        int sum = 0; 
        while (number != 0) {
            int digit = number % 10; 
            number = number / 10; 
            sum = sum + digit * digit; 
        }

        return sum; 
    }
};
