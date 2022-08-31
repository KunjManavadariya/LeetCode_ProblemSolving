class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]!=i) return nums[i]-1;
        // }
        // return nums.size();
        int ans= 0;
        for(int i=1;i<=nums.size(); i++){
            ans ^=i;
        }
        for(int i=0;i<nums.size(); i++){
            ans ^=nums[i];
        }
        return ans;
    }
};