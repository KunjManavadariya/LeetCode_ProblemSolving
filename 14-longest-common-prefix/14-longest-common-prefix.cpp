class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int i,j;
        for(i=0; i<strs[0].size(); i++){
            for(j=1; j<strs.size();j++){
                if(strs[j][i]==strs[j-1][i]){
                    continue;
                }
                else{
                    return res;
                }
            }
            res+=strs[0][i];
        }
        return res;
    }
};