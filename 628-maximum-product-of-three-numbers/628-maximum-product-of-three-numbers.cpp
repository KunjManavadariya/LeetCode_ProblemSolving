class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0]<0 && nums[1]<0 && nums[nums.size()-1]>0){
            if((nums[0]*nums[1])>(nums[nums.size()-2]*nums[nums.size()-3])){
            int res = nums[nums.size()-1]*nums[0]*nums[1];
            return res;
            }
        }
        return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
    }
};