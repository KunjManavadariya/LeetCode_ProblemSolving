class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int last=nums.size()-1;
        if(nums[0]<0 && nums[1]<0 && nums[last]>0){
            if((nums[0]*nums[1])>(nums[last-1]*nums[last-2])) return nums[last]*nums[0]*nums[1];
        }
        return nums[last]*nums[last-1]*nums[last-2];
    }
};