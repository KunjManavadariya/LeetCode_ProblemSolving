class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        else{
            long temp=0,i=x;
            while(x!=0){
                int last=0;
                last=x%10;
                temp=temp*10+last;
                x/=10;
            }
            return (temp == i) ?  1 : 0;
        }
    }
};