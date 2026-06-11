class Solution {
public:
    int climbStairs(int n) {

        if (n < 0) {
            return 0; 
        }

        if (n == 1 || n == 2) {
            return n; 
        }

        // else, we do this 
        int prevF = 1; 
        int prevC = 1; 
        int current = 0; 

        for (int i = n - 2; i >= 0; i--) {
            current = prevC + prevF;
            prevF = prevC; 
            prevC = current; 
        }

        return current; 
        
    }
};
