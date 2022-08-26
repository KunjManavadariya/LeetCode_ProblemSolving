class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size()-1;
        if(nums[0]<0 && nums[1]<0 && nums[n]>0){
            if((nums[0]*nums[1])>(nums[n-1]*nums[n-2])){
            int res = nums[n]*nums[0]*nums[1];
            return res;
            }
        }
        return nums[n]*nums[n-1]*nums[n-2];
    }
};