class Solution {
public:
    bool isPowerOfFour(int n) {
        int count=0, temp=0;
            for(int i=0; i<32; i++){
                if((n&1) == 1){
                    count++;
                    temp=i;
                }
                if(count>1){
                    return false;
                }
                n=n>>1;
            }
        cout<<temp;
        if(count!=1 || temp%2!=0){
            return false;
        }
        return true;
    }
};