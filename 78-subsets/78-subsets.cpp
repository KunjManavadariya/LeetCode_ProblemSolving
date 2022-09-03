class Solution {
public:
     void subs(vector<int> nums, vector<int> ans, int index, vector<vector<int>>& res){
         if(index>=nums.size()){
             res.push_back(ans);
             return ;
         }
         subs(nums, ans, index+1, res);
         
         ans.push_back(nums[index]);
         subs(nums, ans, index+1, res);
     }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        int index=0;
        subs(nums, ans, index, res);
        return res;
    }
};