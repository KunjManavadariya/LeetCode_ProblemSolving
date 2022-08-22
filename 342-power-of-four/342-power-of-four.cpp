class Solution {
public:
    bool isPowerOfFour(int n) {
        int count=0;
            for(int i=0; i<32; i++){
                if((n&1) == 1){
                    count++;
                    if(i%2!=0) return false;
                }
                if(count>1){
                    return false;
                }
                n=n>>1;
            }
        if(count!=1){
            return false;
        }
        return true;
    }
};