class Solution {
public:
    int romanToInt(string s) {
        int i,sum=0; 
        char var;
        for(i=0;i<s.length();i++){
            var=s[i];
            if(var=='I'){
                if(s[i+1] == 'V' || s[i+1] == 'X'){
                    if(s[i+1]=='V'){
                    i+=1;
                    sum+=4;
                }
                 if(s[i+1]=='X'){
                    i+=1;
                    sum+=9;
                }
                }
else{
    sum+=1;
}                
            }
             if(var=='X'){
                if(s[i+1] == 'L' || s[i+1] == 'C'){
                    if(s[i+1]=='L'){
                    i+=1;
                    sum+=40;
                }
                 if(s[i+1]=='C'){
                    i+=1;
                    sum+=90;
                }
                }
else{
    sum+=10;
}                
            }
             if(var=='C'){
                if(s[i+1] == 'D' || s[i+1] == 'M'){
                    if(s[i+1]=='D'){
                    i+=1;
                    sum+=400;
                }
                 if(s[i+1]=='M'){
                    i+=1;
                    sum+=900;
                }
                }
else{
    sum+=100;
}                
            }
            switch(var){
                case 'V':
                    sum+=5;
                    break;
                case 'L':
                    sum+=50;
                    break;
                case 'D':
                    sum+=500;
                    break;
                case 'M':
                    sum+=1000;
                    break;
            }
        }
        return sum;
    }
};