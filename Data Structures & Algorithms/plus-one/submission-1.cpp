class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> digitsCopy = digits; 
        int size = digitsCopy.size();

        int carry = 1; 
        for (int i = size - 1; i >= 0; i --) {
            if (digitsCopy[i] + carry == 10) {
                digitsCopy[i] = 0;

                if (i == 0) {
                    digitsCopy.insert(digitsCopy.begin(), 1); 
                    break; 
                }


            } else {
                digitsCopy[i] = digitsCopy[i] + carry; 
                break; 
            }
        }

        return digitsCopy; 



        
    }
};
