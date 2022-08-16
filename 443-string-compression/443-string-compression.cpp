class Solution {
public:
    int compress(vector<char>& chars) {
//         int n= chars.size();
//         if(n < 2) return n;
//         int count=1;
//         string res="";
        
//         for(int i=0; i<n; i++){
//             res+=(chars[i]);
//             while(i<n-1 && chars[i]==chars[i+1]){
//                 count++;
//                 i++;
//             }
//             if(count>1){
//             res=res+to_string(count);
//             }
//             count=1;
//             }

//         for(int i=0; i<res.size(); i++){
//             chars[i]=res[i];
//         }
        
//         return res.size();
        
        chars.push_back('!');
        int n= chars.size(), count=1;
        string s;
        
        s.push_back(chars[0]);
        for(int i=1; i<n; i++){
            if(chars[i]==s.back()){
                count++;
            }
            else{
                if(count>1){
                s+=to_string(count);
                }
                if(chars[i]!='!') s.push_back(chars[i]);
                count=1;
            }
        }
        for(int i=0; i<s.size(); i++){
            chars[i]=s[i];
        }
        return s.size();
    }
};