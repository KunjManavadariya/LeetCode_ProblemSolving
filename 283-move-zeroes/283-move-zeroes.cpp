class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, j=i+1;
        
        while(j<nums.size()){
        if(nums[i]==0 && nums[j]!=0){
            swap(nums[i++], nums[j++]);
        }
        else if(nums[i]==0 && nums[j++]==0){
           } 
        else{
            i++;
            j++;
        }
        }
    }
};