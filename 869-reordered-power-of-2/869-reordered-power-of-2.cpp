class Solution {
public:
   bool reorderedPowerOf2(int n) {
        string str = to_string(n);
        sort(str.begin(),str.end());
		
        vector<string> power;
        for(int i=0;i<=30;i++){
            int p = pow(2,i);
            power.push_back(to_string(p));
        }
        
        for(int i=0;i<=30;i++){
            sort(power[i].begin(),power[i].end());
        }
        
        for(int i=0;i<=30;i++){
            if(power[i] == str ) return true;
        }
        return false;
    }
};