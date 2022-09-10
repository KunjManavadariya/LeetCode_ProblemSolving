class Solution {
public:
    
     int sum(int n){
        long long res=0;
        while(n!=0){
            res+=n;
            n--;
        }
        return res%1000000007;
    }
    
    int numSub(string s) {
         int count=0;
        int temp=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1') temp++;
            else{
                temp=sum(temp);
                count+=temp;
                temp=0;
            }
        }
        temp=sum(temp);
        count+=temp;
        return count;
    }
};