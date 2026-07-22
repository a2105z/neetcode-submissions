class Solution {
public:
    int maxArea(vector<int>& heights) {
        int leftPtr = 0; 
        int rightPtr = heights.size() - 1; 

        int maxArea = 0; 
        while (leftPtr < rightPtr) {
            int width = rightPtr - leftPtr; 
            int containerHeight = min(heights[leftPtr], heights[rightPtr]); 
            int area = containerHeight * width; 
            maxArea = max(area, maxArea); 

            if (heights[leftPtr] < heights[rightPtr]) {
                leftPtr = leftPtr + 1; 
            } else {
                rightPtr = rightPtr - 1; 
            }
        }

        return maxArea; 



        
    }
};
