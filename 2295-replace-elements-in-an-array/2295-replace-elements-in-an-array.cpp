class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int pos[1000002] = {-1};
        for(int i=0; i<nums.size(); i++){                //Loop to store 
            pos[nums[i]]=i;
        }
        for(int i=0; i<operations.size(); i++){
            if(pos[operations[i][0]] != -1){
                nums[pos[operations[i][0]]]=operations[i][1];
                pos[operations[i][1]]=pos[operations[i][0]];
                pos[operations[i][0]]=-1;
            }
        }
        return nums;
    }
};