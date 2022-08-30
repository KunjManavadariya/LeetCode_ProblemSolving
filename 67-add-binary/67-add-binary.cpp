class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if(a.size()>b.size()){
            for(int i=b.size(); i<a.size(); i++){
                b.push_back('0');
            }
        }
        else if(a.size()<b.size()){
            for(int i=a.size(); i<b.size(); i++){
                a.push_back('0');
            }
        }
        
        string res;
        char carry='0';
        for(int i=0; i<a.size(); i++){
            if(a[i]=='1'&&b[i]=='1'&&carry=='0'){
                res.push_back('0');
                carry='1';
            }
            else if(a[i]=='1'&&b[i]=='1'&&carry=='1'){
                res.push_back('1');
                carry='1';
            }
            else if((a[i]=='1' || b[i]=='1') && carry=='1'){
                res.push_back('0');
                carry='1';
            }
            else if((a[i]=='1' || b[i]=='1') && carry=='0'){
                res.push_back('1');
            }
            else if((a[i]=='0' && b[i]=='0') && carry=='0'){
                res.push_back('0');
            }
            else if((a[i]=='0' && b[i]=='0') && carry=='1'){
                res.push_back('1');
                carry='0';
            }
            
        }
        if(carry=='1'){
            res.push_back('1');
        }
        reverse(res.begin(), res.end());
        return res;   
    }
};