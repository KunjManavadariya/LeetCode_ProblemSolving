class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        bool flag=0;
        for(int i=0; i<words.size(); i++){
            words[i] = words[i].substr(0, pref.size());
            if(words[i]==pref){
                count++;
            }
        }
        return count;
    }
};