class Solution {
public:
    double myPow(double x, int n) {
        double answer = 1.0; 
        int sign = 0;

        if (x < 0 && std::abs(n % 2) == 1) {
            sign = 1; 
        }

        double workingX = std::abs(x);
        int workingN = std::abs(n); 

        for (int i = 0; i < workingN; i++) {
            answer = answer * workingX; 
        }

        // take reciprocal if we need to. 
        if (n < 0) {
            answer = 1.0 / answer;
        }

        // put the sign back 
        if (sign == 1) {
            answer = -answer;
        }

        return answer;
    }
};
