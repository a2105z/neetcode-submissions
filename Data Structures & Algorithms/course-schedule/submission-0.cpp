class Solution {
public:
    vector<vector<int>> graph; // stores prerequisites for each course 
    unordered_set<int> visited; // courses we are current exploring in the DFS path

    bool dfs(int course) {
        // STEP 1: Figure out if we come across a cycle 
        if (visited.count(course) > 0) return false; 

        // STEP 2: Are there no prerequsites left to check? 
        if (graph[course].empty()) return true; 

        // STEP 3: Edge cases are done, now start exploring 
        visited.insert(course); 

        // For all prerequisites, let's see if they pass or if there is a cycle
        for (int pre : graph[course]) {
            if (dfs(pre) == false) return false; // if prerequisite has a cycle, return false 
        }

        // By this point, we are finished exploring the path which means erase from paht and clear
        visited.erase(course);
        graph[course].clear(); 
        return true; 
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        graph.assign(numCourses, {}); 
        visited.clear(); 

        for (int i = 0; i < prerequisites.size(); i++) {
            int course = prerequisites[i][0]; 
            int prereq = prerequisites[i][1];
            graph[course].push_back(prereq); 
        }

        for (int crs = 0; crs < numCourses; crs++) {
            if (dfs(crs) == false) return false; 
        }

        return true; 


    }
};
