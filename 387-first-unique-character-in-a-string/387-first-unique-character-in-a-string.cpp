class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0}, i=0;
        while(i<s.length()){
            freq[s[i++]-'a']++;
        }
        i=0;
        while(i<s.length()){
            if(freq[s[i]-'a']==1){
                return i;
            }
            i++;
        }
        return -1;
    }
};