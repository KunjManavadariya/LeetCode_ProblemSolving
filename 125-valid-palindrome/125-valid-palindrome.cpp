class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0; i<s.size(); i++){
            
            if(s[i]>='A' && s[i]<='Z'){    //if uppercase, convert to lowercase
                s[i]=s[i]-'A'+'a';
            }

        }
        string temp="";
        for(int i=0; i<s.size(); i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                temp.push_back(s[i]);
            }
        }
        
        int st=0, e=temp.size()-1;
        while(st<e){                                       //two pointer approach
            if(temp[st++]!=temp[e--]){
                return 0;
            }
        }
        return 1;
    }
};