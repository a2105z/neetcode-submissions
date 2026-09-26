class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPrice = INT_MAX; 
        int maxProfit = 0; 

        for (int price : prices) {
            lowestPrice = min(lowestPrice, price); 
            maxProfit = max(price - lowestPrice, maxProfit); 
        }
        return maxProfit; 
    }
};
