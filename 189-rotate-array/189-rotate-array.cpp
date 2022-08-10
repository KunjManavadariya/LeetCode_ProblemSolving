class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int count=0, n=nums.size();
        vector<int>res(n);
        while(count<n){
            res[(count+k)%n]=nums[count];
            count++;
        }
        nums=res;
    }
};