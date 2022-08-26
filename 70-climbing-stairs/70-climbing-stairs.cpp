class Solution {
public:
    int climbStairs(int n) {
      int first=3, res=5, count=4;
        if(n==1) return 1;
        if(n==2) return 2;
        if(n==3) return first;
        while(n!=count){
            int temp=res;
            res+=first;
            first=temp;
            count++;
        }
        return res;
    }
};