class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101] = {0};
        int res=0;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        for(int i=0; i<101; i++){
            if(freq[i]==1) res+=i;
        }
        return res;
    }
};