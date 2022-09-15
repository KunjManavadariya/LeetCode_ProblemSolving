class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        int s=0, e=nums.size()-1;
        int mid = s + (e-s)/2;
        bool flag=1;
        while(flag==1){
            s=0; 
            e=nums.size()-1;
            mid = s + (e-s)/2;
            flag=0;
            while(s<=e){
                if(nums[mid]==original){ 
                    original*=2;
                    flag=1;
                    break;
                }
                else if(nums[mid]<original){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
                mid = s + (e-s)/2;
            }
            
        }
        return original;
    }
};