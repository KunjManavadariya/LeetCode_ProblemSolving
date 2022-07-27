class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vect1;
        int i, j;
        for(i=0; i<nums.size();i++){
                for(j=i+1; j<nums.size();j++){
                 if(nums[i]+nums[j]==target){
                     vect1.push_back(i);
                     vect1.push_back(j);
                     return vect1;
                 }   
                }
            
        }
        return vect1;
    }
};