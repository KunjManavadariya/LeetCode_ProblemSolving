class Solution {
public:
    int maxPower(string s) {
        int count=0, temp=0;
        for(int i=0; i<s.length()-1; i++){
            if(s[i]==s[i+1]) temp++;
            else{
                count = max(count, temp);
                temp=0;
            }
        }
        count = max(count, temp);
        return count+1;
    }
};