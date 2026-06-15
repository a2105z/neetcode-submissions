class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> asteroidStack; 
        vector<int> result;
        
        for (int i = 0; i < asteroids.size(); i++) {
            if (asteroids[i] > 0) {
                asteroidStack.push(asteroids[i]); 
            } else {
                bool alive = true;

                while (!asteroidStack.empty() && asteroidStack.top() > 0 && alive) {
                    if (asteroidStack.top() < -asteroids[i]) {
                        asteroidStack.pop();
                    } else if (asteroidStack.top() == -asteroids[i]) {
                        asteroidStack.pop();
                        alive = false;
                    } else {
                        alive = false;
                    }
                }

                if (alive) {
                    asteroidStack.push(asteroids[i]);
                }
            }
        }

        while (!asteroidStack.empty()) {
            int element = asteroidStack.top(); 
            asteroidStack.pop(); 
            result.insert(result.begin(), element); 
        }

        return result; 
    }
};