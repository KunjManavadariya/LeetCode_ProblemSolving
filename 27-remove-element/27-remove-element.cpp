class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0, n=nums.size(), i=0;
        while(i<nums.size()){
            if(nums[i]==val){
               nums.erase(nums.begin()+i);
                count++;
            }
            else i++;
        }
        return n-count;
    }
};