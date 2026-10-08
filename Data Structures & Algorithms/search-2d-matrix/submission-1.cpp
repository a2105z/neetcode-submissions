class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        // index formula is row * numCols + col
        int numRows = matrix.size(); 
        int numCols = matrix[0].size(); 
        int left = 0; int right = numRows * numCols - 1; 

        while (left <= right) {
            int mid = (left + right) / 2;
            int row = mid / numCols; int col = mid % numCols; 
            int value = matrix[row][col]; 

            if (value == target) {
                return true; 
            } else if (value < target) {
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }

        return false; 
    }
};