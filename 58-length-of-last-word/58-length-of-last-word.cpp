class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1, res=0;
        while(s[i--]==' ');
        while(i>=0 && s[i--]!=' '){
            res++;
        }
        return res+1;
    }
};