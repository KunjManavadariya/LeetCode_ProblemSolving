class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        while(i<s.length()){
            if(s[i]==s[i+1]){
                s.erase(i, 2);
                if(i-1>=0){
                    i-=1;
                }
            }
            else{
                i++;
            }
            
        }
        return s;
    }
};