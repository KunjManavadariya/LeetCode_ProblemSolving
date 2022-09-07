class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int freq[1000002] = {-1};
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]=i;
        }
        for(int i=0; i<operations.size(); i++){
            if(freq[operations[i][0]] != -1){
                nums[freq[operations[i][0]]]=operations[i][1];
                freq[nums[freq[operations[i][0]]]]=-1;
                freq[operations[i][1]]=freq[operations[i][0]];
            }
        }
        return nums;
    }
};