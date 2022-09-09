class Solution {
public:
    char findTheDifference(string s, string t) {
        int freq[26]={0};
        for(int i=0; i<s.length(); i++){
            freq[s[i]-'a']++;
        }
        for(int i=0; i<t.length(); i++){
            int *ele = &freq[t[i]-'a'];
            if(*ele!=0) *ele-=1;
            else return t[i];
        }
        return '0';
    }
};