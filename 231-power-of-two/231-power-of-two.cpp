class Solution {
public:
    bool isPowerOfTwo(int n) {
        // n = abs(n);
        if(n==0)return false;
        long long j = n;
        long long g = (j & (j-1));
        return (g) ? false : true;
    }
};