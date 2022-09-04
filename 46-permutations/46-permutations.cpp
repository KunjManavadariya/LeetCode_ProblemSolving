class Solution {
public:
    
    void perm(vector<int> nums, int index, vector<vector<int>> &ans){
        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        //recursive
        for(int i=index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            perm(nums, index+1, ans);
            //backtracking
            swap(nums[index], nums[i]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        perm(nums, index, ans);
        return ans;
    }
};