class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> temp;
        vector<string> res;
        temp=score;
        int freq[1000002] = {-1};
        sort(temp.begin(), temp.end(), greater<int>());
        for(int i=0; i<score.size(); i++){
            freq[temp[i]] = i;
        }
        for(int i=0; i<score.size(); i++){
            if(freq[score[i]]==0) res.push_back("Gold Medal");
            else if(freq[score[i]]==1) res.push_back("Silver Medal");
            else if(freq[score[i]]==2) res.push_back("Bronze Medal");
            else{
                res.push_back(to_string(freq[score[i]]+1));
            }
        }
        return res;
    }
};