class Solution {
public:
    long long sum(int n){
        long long res=0;
        while(n!=0){
            res+=n;
            n--;
        }
        return res%1000000007;
    }
    
    int countHomogenous(string s) {
        int count=0;
        int temp=1;
        for(int i=0; i<s.length()-1; i++){
            if(s[i]==s[i+1]) temp++;
            else{
                temp=sum(temp);
                count+=temp;
                temp=1;
            }
        }
        temp=sum(temp);
        count+=temp;
        return count;
    }
};