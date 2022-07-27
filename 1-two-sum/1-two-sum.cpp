class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vect1;
        int i=0, j;
        while(i<nums.size()){
                for(j=i+1; j<nums.size();j++){
                 if(nums[i]+nums[j]==target){
                     vect1.push_back(i);
                     vect1.push_back(j);
                     return vect1;
                 }   
                    
                }
            i+=1;
        }
        
        return vect1;
    }
};