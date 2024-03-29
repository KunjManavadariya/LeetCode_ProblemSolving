class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, temp=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1) temp++;
            else{
                count=max(count, temp);
                temp=0;
            }
            if(i==nums.size()-1) count = max(count, temp);
        }
        return count;
    }
};