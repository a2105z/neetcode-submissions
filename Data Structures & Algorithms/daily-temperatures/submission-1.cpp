class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // stack = [0, 1, ] - indices of the day whose next warmer day has not bee found
        // temperatures = [30, 29, 32]
        // result[i] = 1

        // temperatures = [30, 38, 30, 36, 35, 40, 28]
        // result = [1, 4, 1, 2, 0, 0]
        // stack = [5,6] 


        int n = temperatures.size(); 
        vector<int> result(n, 0); 
        stack<int> days; 

        for (int i = 0; i < n; i++) {

            while (days.empty() == false && temperatures[i] > temperatures[days.top()]) {
                int previous = days.top();
                days.pop(); 
                result[previous] = i - previous; 
            }
            days.push(i);

        }

        return result; 




        
    }
};
