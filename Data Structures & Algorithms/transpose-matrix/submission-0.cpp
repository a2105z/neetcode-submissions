class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size(); 
        int cols = matrix[0].size(); 
        vector<vector<int>> outputMatrix(cols, vector<int>(rows, 0)); 

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                outputMatrix[j][i] = matrix[i][j];
            }
        }

        return outputMatrix; 
        
    }
};