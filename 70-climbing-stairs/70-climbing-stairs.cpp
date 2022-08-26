class Solution {
public:
    int climbStairs(int n) {
      int first=3, res=5, count=4;
        if(n==1 || n==2) return n;
        if(n==3) return first;
        while(n!=count++){
            swap(res, first);
            res+=first;
        }
        return res;
    }
};