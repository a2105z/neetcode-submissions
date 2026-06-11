class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        std::vector<int> allElements; 

        for (int i = 0; i < nums1.size(); i++) {
            allElements.push_back(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            allElements.push_back(nums2[i]);
        }

        std::sort(allElements.begin(), allElements.end()); 

        int size = allElements.size(); 
        if (size % 2 == 1) {
            return allElements[size / 2]; 
        } else {
            return (allElements[size / 2] * 1.0 + allElements[size / 2 - 1]) / 2.0; 
        }
        
    }
};
