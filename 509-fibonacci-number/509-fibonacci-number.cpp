class Solution {
public:
    int fibo(int n){
        int ans=0;
        if(n==0 || n==1) return n;
        ans=fib(n-1)+fib(n-2);
        return ans;
    }
    
    int fib(int n) {
        return fibo(n);
    }
};