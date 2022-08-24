class Solution {
public:
    bool isPowerOfThree(int n) {
        int max=1162261467;
        if(n<=0) return false;
        if(n==1) return true;
        return max%n==0;
    }
};