class Solution {
public:
    int compress(vector<char>& chars) {
        
        // chars.push_back('!');
        int n= chars.size(), count=1;
        string s;
        
        s.push_back(chars[0]);
        for(int i=1; i<n; i++){
            if(chars[i]==s.back()){
                count++;
                 if(i==n-1){
                    s+=to_string(count);
                }
            }
            else{
                if(count>1){
                s+=to_string(count);
                }
                s.push_back(chars[i]);
                count=1;
            }
        }
        for(int i=0; i<s.size(); i++){
            chars[i]=s[i];
        }
        return s.size();
    }
};