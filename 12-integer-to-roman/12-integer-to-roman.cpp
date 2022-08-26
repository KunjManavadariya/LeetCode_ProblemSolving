class Solution {
public:
    string intToRoman(int num) {
        int val[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        string res = "";
        vector<string> letter = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        for(int i=0; i<13; i++) if(num==val[i]) return letter[i];
        while(num>0){
            if(num<1000){
                int i=0;
                for(i;num>0 && i<13; i++){
                            if(num<val[i]){ 
                                res += letter[i-1];
                                num-=val[i-1];
                                i=-1;
                            }
                            else if(num==val[i]){
                                res += letter[i];
                                return res;
                            }
                }
            }

            else{
                res += letter[12];
                num-=1000;
                }
        }
        return res;
    }
};