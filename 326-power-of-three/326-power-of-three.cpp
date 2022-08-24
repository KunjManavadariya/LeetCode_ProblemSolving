class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        // if(pow(3,20)<INT_MAX) cout<<"True";
        // if(pow(3,19)<INT_MAX) cout<<"True";
        return 1162261467%n==0;
    }
};