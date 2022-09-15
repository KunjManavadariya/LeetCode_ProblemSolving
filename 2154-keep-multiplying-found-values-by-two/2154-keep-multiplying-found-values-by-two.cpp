class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        // int s=0, e=nums.size()-1;
        // int mid = s + (e-s)/2;
        // bool flag=1;
        while(true){
            // while(s<=e){
            //     if(nums[mid]==original){ 
            //         original*=2;
            //         flag=1;
            //         break;
            //     }
            //     else if(nums[mid]<original){
            //         s=mid+1;
            //     }
            //     else{
            //         e=mid-1;
            //     }
            //     mid = s + (e-s)/2;
            // }
            int i = lower_bound(nums.begin(), nums.end(), original) - nums.begin();
            if(i==nums.size())return original;
            if(nums[i] == original)original*=2;
            else return original;
            
        }
        return original;
    }
};