class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size(); 
        stack<int> dayIndexes; 
        vector<int> result(size, 0); 

        for (int i = 0; i < size; i++) {

            while(dayIndexes.empty() != true && temperatures[i] > temperatures[dayIndexes.top()]) {
                int prev = dayIndexes.top(); 
                dayIndexes.pop(); 
                result[prev] = i - prev; 
            }
            dayIndexes.push(i); 
        }

        return result; 

        
    }
};
