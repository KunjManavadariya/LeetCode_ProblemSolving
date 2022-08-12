class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        //This is not the optimal solution!!
        //We will visit this question again!
        
        for(int i=0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        
        sort(nums1.begin(), nums1.end());
        
        int i=0, j=nums1.size()-1, mid=(i+j)/2;
        if(nums1.size()%2 != 0){
            return nums1[mid];
        }
        else{
            double res=(nums1[mid] + nums1[(mid+1)])/2.0;
            return res;
        }
        return 0.00;
    }
};