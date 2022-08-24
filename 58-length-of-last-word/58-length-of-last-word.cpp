class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1, res=0;
        for(i; i>=0; i--){
            if(s[i]==' ' && res>0) return res;
            else if(s[i]!=' ') res++;
        }
        return res;
    }
};
