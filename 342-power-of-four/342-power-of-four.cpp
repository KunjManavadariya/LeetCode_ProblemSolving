class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        else{
            for(int i=0; i<=sqrt(n)/2; i++){
                if(pow(4,i)==n){
                    return true;
                }
            }
            return false;
        }
    }
};