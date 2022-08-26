class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        if(nums[nums.size()-1]<0 && nums[nums.size()-2]<0 && nums[0]>0){
            if((nums[nums.size()-1]*nums[nums.size()-2])>(nums[1]*nums[2])){
            int res = nums[0]*nums[nums.size()-1]*nums[nums.size()-2];
            return res;
            }
        }
        return nums[0]*nums[1]*nums[2];
    }
};