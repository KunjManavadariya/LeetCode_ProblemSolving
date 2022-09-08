class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        bool flag=0;
        for(int i=0; i<words.size(); i++){
            if(words[i][0]==pref[0] && words[i].size()>=pref.size()){
                for(int j=1; j<pref.length(); j++){
                    if(words[i][j]!=pref[j]) flag=1;
                }
                if(flag==1){ 
                    flag=0;
                    continue;
                }
                else count++;
            }
        }
        return count;
    }
};