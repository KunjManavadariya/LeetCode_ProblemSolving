class Solution {
public:
    int fibo(int n){
        int ans=0;
        if(n==0 || n==1) return 1;
        ans=fib(n-1)+fib(n-2);
        return ans;
    }
    
    int fib(int n) {
        if(n==0 || n==1) return n;
        else return fibo(n);
    }
};