class Solution {
public:
    int countPrimes(int n) {
        //Sieve of Eratosthenes
        int count=0;
        if(n==0 || n==1) return 0;
        
        vector<bool> arr(n+1, 1);
        
        for(int i=2; i<n; i++){
            if(arr[i]!=0){
                count++;
                for(int j=i*2; j<n; j+=i) arr[j]=0;
            }
        }
        
    return count;
    }
};