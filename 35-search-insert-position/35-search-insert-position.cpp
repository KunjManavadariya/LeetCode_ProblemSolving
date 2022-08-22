class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0, end=nums.size()-1;
        int mid= st + (end-st)/2;
        while(st<=end){
            if(nums[mid]==target) return mid;
            if(nums[mid]>target) end=mid-1;
            else st=mid+1;
            mid= st + (end-st)/2;
        }
        return st;
    }
};