class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> nums;
        double result;

        if(nums1.size() > 0){
            for (int i = 0; i < nums1.size(); i++){
                nums.push_back(nums1[i]);
            }
        }
        if(nums2.size() > 0){
            for (int i = 0; i < nums2.size(); i++){
                nums.push_back(nums2[i]);
            }
        }
        int numsSz = nums.size();
        sort(nums.begin(), nums.end());


        if(numsSz % 2 == 0){
            result = (nums[(numsSz/2)-1] + nums[(numsSz/2)])/2; 
            return result;
        }
        else{
            result = nums[numsSz/2];
            return result;

        }
    }
};