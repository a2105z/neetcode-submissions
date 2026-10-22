class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int, int>> cars; 
        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]}); 
        }

        sort(cars.rbegin(), cars.rend()); 
        stack<double> finalStack; 

        for (auto& car : cars) {
            double time = (double) (target - car.first) / car.second; 
            finalStack.push(time); 

            if (finalStack.size() >= 2) {
                double current = finalStack.top(); finalStack.pop(); 

                if (current > finalStack.top()) {
                    finalStack.push(current); 
                }
            }
        }
        return finalStack.size(); 

    }
};
