class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        int power = pow(3,19);
        int res=power%n;
        return res==0;
    }
};