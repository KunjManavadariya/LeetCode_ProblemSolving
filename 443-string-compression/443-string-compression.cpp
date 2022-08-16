class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() < 2) return chars.size();
        int count=1;
        string res;
        
        for(int i=0; i<chars.size(); i++){
            res.push_back(chars[i]);
            while(i<chars.size()-1 && chars[i]==chars[i+1]){
                count++;
                i++;
            }
            if(count>1){
            res=res+to_string(count);
            }
            count=1;
            }
            cout<<res;

        for(int i=0; i<res.size(); i++){
            chars[i]=res[i];
        }
        
        return res.size();
    }
};