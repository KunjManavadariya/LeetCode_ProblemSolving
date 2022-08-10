class Solution {
public:
    void moveZeroes(vector<int>& nums) {
//         int i=0, j=i+1;
        
//         while(j<nums.size()){
//         if(nums[i]==0 && nums[j]!=0){
//             swap(nums[i++], nums[j++]);
//         }
//         else if(nums[i]==0 && nums[j++]==0){
//            } 
//         else{
//             i++;
//             j++;
//         }
//         }
        
         int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};