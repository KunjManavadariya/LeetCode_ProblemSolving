class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> res;
        int count=0, sum=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<queries.size(); i++){
            for(int j=0; j<nums.size(); j++){
                sum+=nums[j];
                if(sum>queries[i]){
                    res.push_back(count);
                    sum=0;
                    count=0;
                    break;
                } 
                count++;
            }
            if(sum!=0) res.push_back(count);
            sum=0;
            count=0;
        }
        return res;
    }
};